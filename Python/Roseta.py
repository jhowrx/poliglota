#Roseta.py

import turtle
t = turtle.Pen()
t.speed(0)
t.pensize(5)
turtle.bgcolor("black")

#        0       1         2        3
cores = ["red", "yellow", "blue", "green", "magenta", "orange", "purple","brown"]
quant = int (turtle.numinput("Cirulos", "Quantos circulos? "))
raio = int(turtle.numinput("raio", "Qual o raio? "))

for x in range(quant):
    indice = x%8
    t.pencolor(cores[indice])
    t.circle(raio)
    t.left(360 / quant)
    


