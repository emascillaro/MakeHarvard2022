import PIL
from PIL import Image,ImageTk
import pytesseract
import cv2
from tkinter import *
import tkinter as tk

width, height = 800, 600
cap = cv2.VideoCapture(0)
cap.set(cv2.CAP_PROP_FRAME_WIDTH, width)
cap.set(cv2.CAP_PROP_FRAME_HEIGHT, height)

root = Tk()
root.bind('<Escape>', lambda e: root.quit())
lmain = Label(root)
lmain.pack()


def show_frame():
    ret, frame = cap.read()
    if ret:
        cv2image = cv2.cvtColor(frame, cv2.COLOR_BGR2RGBA)
        img = PIL.Image.fromarray(cv2image)
        imgtk = ImageTk.PhotoImage(image=img)
        lmain.imgtk = imgtk
        lmain.configure(image=imgtk)
        lmain.after(10, show_frame)

def capture_image():
    videoCaptureObject = cv2.VideoCapture(0)
    ret, frame = videoCaptureObject.read()
    img = cv2.imwrite("Capture_Image.jpg", frame)
    #videoCaptureObject.release()

image_capture = tk.Button(text="Take Picture", command = capture_image)
image_capture.pack()

print("Opening Application")

show_frame()
root.mainloop()