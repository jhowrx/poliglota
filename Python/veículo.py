#veiculo.py

#herança = É UM

#clase mãe
class Automovel:

    #construtor
    def __init__(self,modelo):
        self.modelo = modelo
        self.combustivel = 0                                     
        self.kmPorLitro = 8.0

    #função biultin
    #retorna uma string
    def __str__(self):
        return 'Automovel modelo: ' + self.modelo
    
    #funções de classe
    def ligar(self):
        self.ligado = True
        print("%s ligado" % self.modelo)

    def desligar(self):
        self.ligado = False
        print("%s desligado" % self.modelo)

    def acelerar(self):
        print("Acelerando %s VRummm..." % self.modelo)

    def ligar_alarme(self):
        print("Ligando alarme do %s BIP BIP" % self.modelo)

    def desligar_alarme(self):
        print("Desligando alarme do %s BIP BIP" % self.modelo)

    def abastecer(self, combustivel_litros):
        self.combustivel = self.combustivel + combustivel_litros
        print("{} abasteceu {} litros".format(self.modelo, combustivel_litros))

    def rodar(self, kmParaRodar):
        if(not self.ligado):
            print("{} está desligado!".format(self.modelo))
        elif ((self.combustivel * self.kmPorLitro) >= kmParaRodar):
            print("{} rodando {} km" .format(self.modelo, kmParaRodar))
            print("Combustível no tanque antes de rodar = {} litros".format (self.combustivel))
            self.combustivel = (self.combustivel - (kmParaRodar / self.kmPorLitro))
            print("Combustível restante após rodar = {} litros".format(self.combustivel))
        else:
            print("Nao ha combustivel suficiente para rodar!")
            
#classe filho (carro é um automovel
class Carro(Automovel):
    #sobrescreve a função str
    def __str__(self):
        return 'Carro modelo: ' + self.modelo

class Moto(Automovel):
    def __str__(self):
        return 'Moto modelo: ' + self.modelo


#main
fusca = Carro('Fusca')
fusca.ligar()
fusca.acelerar()
fusca.ligar_alarme()
fusca.desligar_alarme()
fusca.abastecer(50)
fusca.rodar(50)
fusca.desligar()

moto = Moto('Moto CG')
moto.ligar()


auto = Automovel('???')

print(auto)
print(fusca)
print(moto)

#fusca é um carro?
if (isinstance(fusca, Carro)):
    print ('Fusca é um carro')
else:
    print('Fusca não é um carro')
