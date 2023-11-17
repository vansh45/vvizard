#a1
import pickle

import cv2
import numpy as np
import face_recognition
import os
from datetime import datetime, timedelta
# from embeddings_generator import class_names
from collections import deque
import time


#a2
path = 'E:\Music\PycharmProjects\Office_counter\office_data\images_(phone)'
images = []
class_names = []
# recognised = {}
buffer = deque(maxlen=10)
my_list = os.listdir(path)
seen_list = []
# print(my_list)


for cl in my_list:
    curImg = cv2.imread(f'{path}/{cl}')
    images.append(curImg)
    class_names.append(os.path.splitext(cl)[0])
print(class_names)

# print(images)

def rotation(frame):
    angle = 180

    # Calculate the center of the image
    height, width = frame.shape[:2]
    center = (width / 2, height / 2)

    # Create the rotation matrix
    rotation_matrix = cv2.getRotationMatrix2D(center, angle, scale=1.0)
    # Apply the rotation to the image
    rotated_image = cv2.warpAffine(frame, rotation_matrix, (width, height))
    return  rotated_image


with open('embeddings.pkl', 'rb') as f:
    encode_list_known = pickle.load(f)
print('Encoding Completed, people encoded = ',len(encode_list_known) )


# --------------------[ a3 ]----------------------


last_marked_time = datetime.now()
time_interval = timedelta(seconds=8)

def markAttendence(name):
    global last_marked_time
    current_time = datetime.now()
    time_difference = current_time - last_marked_time

    if time_difference >= time_interval:
        last_marked_time = current_time
        with open('E:\Music\PycharmProjects\Office_counter\office_data\Attendence.csv', 'a') as f:  # Open in append mode
            status = 'entered'
            dt_string = current_time.strftime("%Y-%m-%d %H:%M:%S")
            f.writelines(f'\n{name}, {dt_string},{status}')

# ---------------------[ a4 ] -------------------


# cap =  cv2.VideoCapture('E:\\Music\\PycharmProjects\\Office_counter\\office_data\\stairs_footage\\bottom stair.mp4')
cap =  cv2.VideoCapture('E:\\Music\\PycharmProjects\\Office_counter\\office_data\\stairs_footage\\test_dev.mp4')

while True:
    success, img = cap.read()
    # img = cv2.resize(img, (0,0),img,0.3,0.3)
    if not success:
        print(' Video Completed ')
        break



    # img = rotation(img)
    u = 0.25
    img_ = cv2.resize(img,(0,0),None, u,u)
    m = int(1/u)   # multiplier
    img_ = cv2.cvtColor(img_,cv2.COLOR_BGR2RGB)




    faces_in_curr_frame = face_recognition.face_locations(img_)
    encodings_of_curr_frame = face_recognition.face_encodings(img_,faces_in_curr_frame)

    for encode_face, face_loc in zip(encodings_of_curr_frame,faces_in_curr_frame):
        matches = face_recognition.compare_faces(encode_list_known,encode_face)
        face_dist = face_recognition.face_distance(encode_list_known,encode_face)
        # print(face_dist)

        matchIndex = np.argmin(face_dist)
        match_value = min(face_dist)
        # print(match_value)


        if matches[matchIndex] and match_value <= 0.57:

                name = class_names[matchIndex]
                buffer.append(name)

                 # if name not in recognised:
                #     recognised[name] = 1
                # else:
                #     recognised[name] +=1


                print(name,match_value)

                y1,x2,y2,x1 = face_loc

                y1, x2, y2, x1 = y1*m,x2*m,y2*m,x1*m

                cv2.rectangle(img, (x1,y1),(x2,y2),(0,255,0),2)
                # cv2.rectangle(img,(x1,y2),(x2,y2+35),(0,255,0),cv2.FILLED)
                cv2.putText(img, name,(x1+6,y2+20),cv2.FONT_HERSHEY_COMPLEX,1,(255,255,255),2)

                if buffer.count(name) > 5:
                    markAttendence(name)
                    seen_list.append(name)

        else:
                name = 'Unknown'
                print(name,match_value)
                y1,x2,y2,x1 = face_loc

                y1, x2, y2, x1 = y1*m,x2*m,y2*m,x1*m

                cv2.rectangle(img, (x1,y1),(x2,y2),(0,0,255),2)
                # cv2.rectangle(img,(x1,y2),(x2,y2+35),(0,255,0),cv2.FILLED)
                cv2.putText(img, name,(x1+6,y2+20),cv2.FONT_HERSHEY_COMPLEX,1,(255,255,255),2)


    cv2.imshow('Webcam',img)
    cv2.waitKey(1)

cap.release()
cv2.destroyAllWindows()
# print(recognised)
print(seen_list)


