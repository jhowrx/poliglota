//lertexto.cpp

#include <fstream>
#include <iostream> //cout (printf)
#include <windows.h>

using namespace std;

int main(){
	
	const int MAX = 80; //lê no máximo 80 carateres por linha
	char buffer [MAX]; //cria um vetor com tamanho de 80 caracteres
	
	ifstream arquivo("E:\\Curso poliglota-Gustavo\\C\\texto.txt"); //input file stream	
	
	//fim do arquivo = end of arquivo
	while (!arquivo.eof()){ //enquanto não chegar no final do arquivo
		arquivo.getline(buffer, MAX); // le uma unia linha
		cout << buffer << endl;
		Sleep(500);
	}
	
	cout << "\nFim do arquivo\n";
	
	system("pause");
	return 0;
}
