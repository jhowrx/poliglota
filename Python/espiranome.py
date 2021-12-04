#espiraNome.py

import turtle
t = turtle.Pen()
turtle.bgcolor("black")

#        0       1         2        3
cores = ["red", "yellow", "blue", "green"]
nome = "Gustavo"

#0..99
for x in range(100):
    resto = x%4 #0,1,2,3
    cor = cores [resto]
    t.pencolor(cor)
    t.penup()
    t.forward(x * 4)
    t.pendown()
    t.write(nome, font = ("Arial", int((x+4) / 4)))
    t.left(45)
