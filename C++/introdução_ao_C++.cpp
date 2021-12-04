//retangulo.cpp
//introdu��o ao C++

#include <iostream>
using namespace std;

//defini��o da classe
class Retangulo {
	
	public:
	
	//atributos = membros de dados
	int base, altura;
	
	//comportamentos, fun��es ou m�todos
	void init(int b, int h){
		base = b;
		altura = h;
	}
	
	//fun��o membro para imprimir dados
	void imprimirDados(){
		cout << "Base = "<< base << "\tAltura =" << altura;
		cout << "\tArea = " << (base * altura) << endl;
	}

};

int main (){
	
	//declara objetos do tipo retangulo
	Retangulo a, b;
	a.init(5 , 3);
	a.imprimirDados();
	
	b.init(10, 6);
	b.imprimirDados();
	
	system("pause");
	return 0;
}
