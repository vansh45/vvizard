import cv2
import face_recognition
import os
import numpy as np
import pickle


def find_encodings(images,image_names):
    encode_list = []
    for img, name in zip(images,image_names):
        img = cv2.cvtColor(img, cv2.COLOR_BGR2RGB)
        face_locations = face_recognition.face_locations(img)

        if face_locations:
            encode = face_recognition.face_encodings(img, face_locations)[0]
            encode_list.append(encode)
        else:
            print(f"No face found in this image. -> {name}")

    return encode_list


if __name__ == "__main__":
    path = 'E:\Music\PycharmProjects\Office_counter\office_data\annot'
    images = []
    image_names = []
    class_names = []

    my_list = os.listdir(path)

    for cl in my_list:
        curImg = cv2.imread(f'{path}/{cl}')

        if curImg is not None:
            images.append(curImg)
            image_names.append(cl)
            class_names.append(os.path.splitext(cl)[0])
        else:
            print(f"Error loading image: {cl}")
    print('faces -',class_names)

    if images:
        encode_list_known = find_encodings(images, image_names)

        with open('embeddings.pkl', 'wb') as f:
            pickle.dump(encode_list_known, f)

        print('Encoding Completed, people encoded = ', len(encode_list_known))
    else:
        print("No valid images found.")
