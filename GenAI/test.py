import cv2

#!/usr/bin/env python3

def main(camera_index=2):
    cap = cv2.VideoCapture(camera_index)
    if not cap.isOpened():
        print(f"ERROR: Cannot open camera {camera_index}")
        return
    try:
        while True:
            ret, frame = cap.read()
            if not ret:
                print("ERROR: Failed to read frame")
                break
            cv2.imshow('Webcam', frame)
            if cv2.waitKey(1) & 0xFF in (ord('q'), 27):  # q or ESC to quit
                break
    finally:
        cap.release()
        cv2.destroyAllWindows()

if __name__ == "__main__":
    main()