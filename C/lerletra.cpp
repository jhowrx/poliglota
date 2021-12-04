//lerletra.cpp

#include <fstream>
#include <iostream> //cout e cin
#include <windows.h>

using namespace std;

int main (){
	ifstream arquivo("E:\\Curso poliglota-Gustavo\\C\\letra.txt");
	char ch;
	
	//enquato não encontrar ctrl z no arquivo...
	while (arquivo.get(ch)){ // le um caractere do arquivo
		cout.put(ch); //imprime na tela
		Sleep(50);
	}
	system ("pause");
	return 0;	
}
