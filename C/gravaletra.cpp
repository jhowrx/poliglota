//gravaletra.cpp

//grava um caractere por ve at� pressionar CRTL 

#include <fstream>
// cin (equivale ao scanf) = � o objeto de entrada padr�o (teclado)
//cout (equivale ao printf) = � o objeto de saida padr�o (monitor)
#include <iostream> 
using namespace std;

int main (){
	ofstream arquivo("E:\\Curso poliglota-Gustavo\\C\\letra.txt");
	char ch;
	
	cout << "Digite o texto e pressione ENTER + CTRL Z + ENTER para finaliar" << endl;
	
	//enquanto n�o pressionar ctrl z
	//cin.get(ch) = le um caractere do teclado e guarda na variavel ch
	while (cin.get(ch)) {
		arquivo.put(ch); //grava umcaractere no arquino
	}
	
	
	return 0;
}
