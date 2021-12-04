//gravaletra.cpp

//grava um caractere por ve até pressionar CRTL 

#include <fstream>
// cin (equivale ao scanf) = é o objeto de entrada padrão (teclado)
//cout (equivale ao printf) = é o objeto de saida padrão (monitor)
#include <iostream> 
using namespace std;

int main (){
	ofstream arquivo("E:\\Curso poliglota-Gustavo\\C\\letra.txt");
	char ch;
	
	cout << "Digite o texto e pressione ENTER + CTRL Z + ENTER para finaliar" << endl;
	
	//enquanto não pressionar ctrl z
	//cin.get(ch) = le um caractere do teclado e guarda na variavel ch
	while (cin.get(ch)) {
		arquivo.put(ch); //grava umcaractere no arquino
	}
	
	
	return 0;
}
