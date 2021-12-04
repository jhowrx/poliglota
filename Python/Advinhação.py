#Jogo de Advinhação


import random

def jogar():
    print("===============================");
    print("Bem vindo ao jogo de Advinhação")
    print("===============================")

    numero_secreto = random.randrange(1,101) #gera numero entre 1 e 100
    total_de_tentativas = 5
    pontos = 1000



    
  

    for tentativa in range (1, total_de_tentativas +1):

        print("Tentativa %d de %d" % (tentativa, total_de_tentativas))
      

        chute_str = input ("Digite um número: ")
        chute = int (chute_str)

        if (chute < 1 or chute > 100):
            print ("você deve digitar um número entre 1 e 100")


        acertou = chute == numero_secreto #true or false
        maior = chute > numero_secreto #true or false
        menor = chute < numero_secreto #true or false

        

        if acertou:
            print("Você acertou e fez {} pontos:D". format(pontos))
            break
        else:
            pontos_perdidos = abs(numero_secreto - chute)
            pontos = pontos - pontos_perdidos
            
            print("Errou :(")
            if (maior):
                print("Errou! O seu chute foi maior que o número")

            elif (menor):
                print("Errou! O seu chute foi menor que o número")
    print(f'O número secreto é {numero_secreto}. Você fez {pontos}')    

jogar()
