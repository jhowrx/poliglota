#jogo da forca 1.0

palavra_secreta= "BANANA"
tamanho = len (palavra_secreta) #len (para ver o tamanho da palavra)
acertos = 0
ja_foi = []

partes_do_corpo = ['cabeça','tronco','perna esquerda','perna direita','braço esquerdo','braço direito']

digitadas = []
for letra in palavra_secreta:
    digitadas.append('__')

    