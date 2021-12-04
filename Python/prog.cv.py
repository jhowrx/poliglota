#prog_cv.py
#instalar a biblioteca OPENCV = computer vision
#..\Python\Python39\Scripts> pip install opencv-python

import cv2 #opencv instalado

imagem = cv2.imread("frutas.jpg")
cv2.imshow("Imagem", imagem)

