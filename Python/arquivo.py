#Arquivo texto:
#operações: 1-escrever = write = 'w'/ 2-ler = read = 'r'/ 3-anexar = append = 'a'
#Tipos de arquivos:1-texto/ 2-binário

def gravar():
    arquivo = open ('frutas.txt', 'w')#write
    arquivo.write("banana\nlaranja\nuva")
    arquivo.close()

def ler():
    arquivo = open('frutas.txt', 'r')#read
    #Para cada linha do arquivo imprima a linha
    for linha in arquivo:
        print(linha, end='')

    arquivo.close()

def anexar():
    arquivo = open ('frutas.txt', 'a') #append(acrescentar)
    arquivo.write('\nmelancia')
    arquivo.close()

#gravar()
#ler()
anexar()
