#b1
import cv2
import pandas as pd
from ultralytics import YOLO
from tracker import *
import cvzone
import numpy as np
from area_coordinates import area1, area2, v
import torch

#b2
model = YOLO('E:\\Music\\PycharmProjects\\Motion_meter\\yolov8s.pt').to(torch.device('cpu'))
cap = cv2.VideoCapture(v)

my_file = open("E:\\Music\\PycharmProjects\\Motion_meter\\coco.txt", "r")
data = my_file.read()
class_list = data.split("\n")
# print(class_list)

count = 0
tracker = Tracker()


going_out = {}
going_in = {}
counter1 = []
counter2 = []

while True:
    ret, frame = cap.read()
    if not ret:
        print('---------------error 404-------------------')
        break


    frame = cv2.resize(frame, (1200, 800))

    results = model.predict(frame)
    #   print(results)
    a = results[0].boxes.data
    px = pd.DataFrame(a).astype("float")
    #    print(px)

    lst = []
    for index, row in px.iterrows():
        #        print(row)

        x1 = int(row[0])
        y1 = int(row[1])
        x2 = int(row[2])
        y2 = int(row[3])
        d = int(row[5])

        c = class_list[d]
        if 'person' in c:
            lst.append([x1, y1, x2, y2])
    bbox_idx = tracker.update(lst)
    for bbox in bbox_idx:
        x3, y3, x4, y4, id = bbox

        result = cv2.pointPolygonTest(np.array(area2, np.int32), ((x4, y4)), False)
        if result >= 0:
            going_out[id] = (x4, y4)
        if id in going_out:
            result1 = cv2.pointPolygonTest(np.array(area1, np.int32), ((x4, y4)), False)
            cv2.circle(frame, (x4, y4), 7, (255, 0, 255), -1)
            cv2.rectangle(frame, (x3, y3), (x4, y4), (0, 165, 255), 2)
            cvzone.putTextRect(frame, f'{id}', (x4, y4), 1, 1)
            if result1 >= 0:

                if counter1.count(id) == 0:
                    counter1.append(id)

        result2 = cv2.pointPolygonTest(np.array(area1, np.int32), (x4, y4), False)
        if result2 >= 0:
            going_in[id] = (x4, y4)
        if id in going_in:
            result3 = cv2.pointPolygonTest(np.array(area2, np.int32), (x4, y4), False)
            cv2.circle(frame, (x4, y4), 7, (255, 0, 255), -1)
            cv2.rectangle(frame, (x3, y3), (x4, y4), (32, 178, 170), 2)
            cvzone.putTextRect(frame, f'{id}', (x4, y4), 1, 1)
            if result3 >= 0:

                if counter2.count(id) == 0:
                    counter2.append(id)

    out_d = (len(counter1))
    in_d = (len(counter2))
    cvzone.putTextRect(frame, f'exited   : {out_d}', (50, 60), scale=2, thickness=2, offset=1, colorR=(11, 11, 11),
                       colorB=(0, 0, 190), colorT=(100, 100, 230))
    cvzone.putTextRect(frame, f'entered : {in_d}', (50, 110), scale=2, thickness=2, offset=1, colorR=(11, 11, 11),
                       colorB=(50, 205, 50), colorT=(50, 205, 50))

    cv2.polylines(frame, [np.array(area1, np.int32)], True, (0, 255, 0), 2)
    cv2.polylines(frame, [np.array(area2, np.int32)], True, (0, 255, 0), 2)


    cv2.imshow("RGB", frame)
    if cv2.waitKey(1) & 0xFF == 27:
        break
cap.release()
cv2.destroyAllWindows()
