#prog_cv.py
#instalar a biblioteca OPENCV = computer vision
#..\Python\Python39\Scripts> pip install opencv-python
#pip install numpy
#pip install scikit-image
#pip install pafy
#pip install --upgrade youtube_dl

import cv2 #opencv instalado
from skimage import io
import pafy

def mostraImagem(): #mostra imagem de arquivo no disco
    imagem = cv2.imread("fruta.jpg")
    cv2.imshow("Imagem", imagem)
    cv2.waitKey(0)
    cv2.destroyAllWindows()


#mostra imagem da web
def mostraWeb():
    imagem = io.imread("https://softgraf.com/img/img1.jpg")
    cv2.imshow("Imagem da web", imagem)

#mostra imagem de um video
def exibeQuadro():
    captura = cv2.VideoCapture("Video.mp4") #360
    ret, frame = captura.read()
    cv2.imshow("Exibindo um quadro de video", frame)
    
def exibeVideo():
    #use parâmetro (0) para capturar da webcam
    #Ex.: captura = cv2.VideoCapture("video.mp4")
    captura = cv2.VideoCapture("Video.mp4") #360

    while True:
        ret, frame = captura.read()
        cv2.imshow("Exibindo imagem quadro a quadro", frame)

        #aguarda 25 milisegundos (determina a velocidade de exibição)
        if cv2.waitKey(30) & 0xFF == ord ("s"): #sair
            break #interrompe o loop while

    captura.release()
    cv2.destroyAllWindows()

#captura cada quadro de um video do youtube
def exibeYoutube():
    url = "https://www.youtube.com/watch?v=ppdgpPpTf60"
    video = pafy.new(url)
    best = video.getbest()
    captura = cv2.VideoCapture(best.url)

    while True:
        ret, frame = captura.read()
        cv2.imshow("exibundo video do youtube",frame)
        cv2.waitKey(25)

    
    

#mostraImagem()
#mostraWeb()
#exibeQuadro()
#exibeVideo()
exibeYoutube()
