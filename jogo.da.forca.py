#jogo da forca 1.0

palavra_secreta = "banana"
tamanho = len (palavra_secreta) #len (para ver o tamanho da palavra)
acertos = 0
ja_foi = []

partes_corpo = ['cabeça','tronco','perna esquerda','perna direita','braço esquerdo','braço direito']

digitadas = []
for letra in palavra_secreta:
    digitadas.append('__') #append adiciona um item ao fim da lista

def mostrar_digitadas():
    print('Palavra secreta: ', end = '')
    for item in digitadas:
        print(f' {item} ', end='')

def salvar_letra(letra):
    ind = 0
    encontrou = 0
    for c in palavra_secreta:
        if (c == letra):
            digitadas[ind] = letra
            encontrou += 1
        ind += 1
    return encontrou


print('\n\n\t##############################')
print('\t# Bem vindo ao Jogo da Forca #')
print('\t##############################\n\n')


mostrar_digitadas()

while True:
    letra = input('\nDigite uma letra:  ') #input significa 'entrada'

    if letra in ja_foi:
        print('\nJá foi digitada!! tente outra letra. ')
        continue

    ja_foi.append(letra)

    if (letra in palavra_secreta):
        print('\nAcertou. Muito bem')
        acertos += salvar_letra(letra)
        mostrar_digitadas()

        if (acertos == tamanho):
            print('\nVocê venceu! Parabéns!!')
            break

    else:
        print('Errou! Enforcou: ', partes_corpo[0])
        del partes_corpo[0]
        if (len(partes_corpo) == 0):
            print ("\nVocê perdeu!")
            break

        


    
