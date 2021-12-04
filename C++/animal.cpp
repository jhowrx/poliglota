//animal.cpp

#include <iostream>
using namespace std;

//definição de classe
class Animal{
	private:
		
		//membros de dados
		int altura;
		string cor, nome ;
		
		
	public:
		void init(string c, int h, string n){
			cor = c;
			altura = h;
			nome = n;
		}
		
		//função membro para imprimir dados
		void imprimirDados(){
			cout << nome << "\tCor = " << cor << "\tAltura =" << altura << endl;
		}
			
	
};

int main (){
	
	//declara dois objetos da classe animal
	Animal cao, gato;
	cao.init("pardo", 40, "Scooby");
	gato.init("gato", 20, "Tom");
	
	cao.imprimirDados();
	gato.imprimirDados();	
			
			
	system ("pause");
	return 0;
	}
