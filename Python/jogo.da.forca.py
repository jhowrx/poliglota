#jogo da forca 1.0

palavra_secreta= "BANANA"
tamanho = len (palavra_secreta) #len (para ver o tamanho da palavra)
acertos = 0
ja_foi = []

partes_do_corpo = ['cabeça','tronco','perna esquerda','perna direita','braço esquerdo','braço direito']

digitadas = []
for letra in palavra_secreta:
    digitadas.append('__')

def mostrar_digitadas():
    print('Palavra secreta: ', end='')
    for item in digitadas:
        print(f'{item} ', end='')

def salvar_letra (letra):
    ind = 0
    encontrou = 0
    for c in palavra_secreta:
        if (c == letra):
            digitadas[ind] = letra
            encontrou += 1
        ind += 1
    return encontrou
    
