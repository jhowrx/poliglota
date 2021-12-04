#for i in range (9,10,-1):
   # print(i)

while True:

    idade = int (input('Digite a idade: '))
    if (idade < 0):
        break  
    if (idade <=12):
        print('criança')
    elif (idade > 12 and idade < 29):
        print('adolescente')
    elif (idade >= 29 and idade < 60):
        print('adulto')
    elif (idade >= 60 and idade < 120):
        print('terceira idade')
    else :
        print('morreu')
