import cv2
import numpy as np
v = 'E:\\Music\\PycharmProjects\\Motion_meter\\test8.mp4'
cap = cv2.VideoCapture(v)
area1 = []
area2 = []
current_area = area1
drawing = False

ret, frame = cap.read()
frame = cv2.resize(frame, (1200, 800))
drawing_area = False  # Variable to track drawing area

def RGB(event, x, y, flags, param):
    global current_area, drawing_area
    if event == cv2.EVENT_LBUTTONDOWN:
        drawing = True
        current_area.append((x, y))
        cv2.circle(frame, (x, y), 5, (0, 255, 0), -1)

    elif event == cv2.EVENT_LBUTTONUP:
        drawing = False

    elif event == cv2.EVENT_RBUTTONDOWN:
        # Toggle the drawing_area variable to enable/disable area drawing
        drawing_area = not drawing_area
        if drawing_area:
            current_area = area1
        else:
            current_area = area2

cv2.namedWindow('RGB')
cv2.imshow('RGB', frame)
cv2.setMouseCallback('RGB', RGB)

while True:
    if drawing_area:
        # Draw the defined areas as polygons
        cv2.polylines(frame, [np.array(area1, np.int32)], True, (0, 255, 0), 2)
        cv2.polylines(frame, [np.array(area2, np.int32)], True, (0, 255, 0), 2)

    # Display the frame
    cv2.imshow("RGB", frame)

    # Wait for a key press
    key = cv2.waitKey(1)

    if key & 0xFF == 27:
        break
    elif key & 0xFF == ord('s'):  # Press 's' to save the areas and move to the next frame
        print('Area 1:', area1)
        print('Area 2:', area2)
        ret, frame = cap.read()
        frame = cv2.resize(frame, (1200, 800))

        if not ret:
            break

cap.release()
cv2.destroyAllWindows()
