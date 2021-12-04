#shopfoto

import cv2

def eventoClique (evento, x, y, flags, param):
    if evento == cv2.EVENT_LBUTTONDOWN:
        print(x, ",", y)
        pt = [x,y]
        img = cv2.circle(imagem, pt, 20, cor, -1)
        cv2.imshow("Meu Shopfop", img)


#branco
cor = [255,255,255] #lista de inteiros
#vermelho = [0,0,255}
#verde = [0,255,0]
#azul = [255, 0, 0]

imagem = cv2.imread("fruta.jpg")


cv2.imshow("Meu Shopfop", imagem)

#evento disparado quando o mouse é clicado
cv2.setMouseCallback("Meu Shopfop", eventoClique)

cv2.waitKey(0)
cv2.destroyAllWindows()

cv2.imwrite("frutas.paint.jpg", imagem)
