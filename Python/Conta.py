#onta.py

class Conta:
    #construtor da classe
    def __init__ (self, numero, titular, saldo, limite):
        print("Construindo objeto...{}".format(self))
        self.__numero = numero
        self.__titular = titular
        self.__saldo = saldo
        self.__limite = limite

    #funções para retornar as variaveis privadas
    #cria uma propriedade para acessar as variaveis
    @property #permite apenas leitura
    def numero (self):
        return self.__numero

    @property 
    def saldo (self):
        return self.__saldo

    @property 
    def limite (self):
        return self.__limite

    #uma função setter é usada para alterar uma variavel privada
    @limite.setter
    def limite(self, limite):
        self.__limite = limite

    def deposita(self, valor):
        self.__saldo += valor

    def saca(self, valor):
        if ((self.__saldo + self.__limite) >= valor):
            self.__saldo -= valor
        else:
            print(f'o valor {valor} do limite')

    #método pertence a classe, não ao objeto
    #assim esse dado sera compartilhado entre todos os objetos
    def codigo_banco():
        return '101'

            
    @staticmethod
    def codigos_bancos():
        return {'BB':'101', 'Caixa':'104','Bradesco':'237'}

contaZe = Conta(456, 'Ze', 100, 1000);
print(contaZe.saldo)




contaJoao = Conta(123, 'João da Silva', 100, 1000)
contaJoao.deposita(500)
print(f'Saldo da conta = {contaJoao.saldo}')


#contaJoao = Conta(123, 'João da Silva', 100, 1000)
#contaJoao.limite = 2000 #chama o setter limite
#print(contaJoao.limite) #chama a propriedade limite (getter)

contaJoao.saca(200000)
print(f'Saldo após sacar = {contaJoao.saldo}')

print(Conta.codigo_banco())
print(Conta.codigos_bancos())
print(Conta.codigos_bancos()['BB']) #só BB
