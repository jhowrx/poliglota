import turtle
t = turtle.Pen()
turtle.bgcolor('black')
t.pencolor("red")
#          0    1        2       3
cores = ["red","green","orange","white"]

for x in range(100):
    t.pencolor(cores[x%4])
    t.forward(x*5)
    t.left(91)
 

