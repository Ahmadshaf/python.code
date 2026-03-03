from ultralytics import YOLO
import cv2 
model= YOLO('yolov8n.pt')
#result= model("C:\Users\obaid\Desktop" ,show = True )
result = model(r"C:\Users\obaid\Desktop", show=True)

cv2.waitKey(5)
input("press ENTER  to close...")