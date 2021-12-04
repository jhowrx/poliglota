//gravatexto.cpp
//stream = fluxo

#include <fstream>
using namespace std;

int main () {
	
	//cria um arquivo em disco para gravar texto
	//criou um fluxo de saida chamado arquivo
	//output file stream
	ofstream arquivo("D:\\curso.poliglota-Gustavo\\C\\texto.txt");
	arquivo << "O C++ foi inicialmente desenvolvido por Bjarne Stroustrup" <<endl //endl serve para cortar a linha
			<< "dos Bell Labs, durante a década de 1980 com o objetivo" <<endl
			<< "implementar uma versão distribuída do núcleo Unix." <<endl
			<< "Como o Unix era escrito em C, deveria-se manter a compatibilidade," <<endl
			<< "ainda que adicionando novos recursos."; 
			
	return 0;	
			
}
