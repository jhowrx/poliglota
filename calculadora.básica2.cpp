#include <stdlib.h>
#include <stdio.h>

//retorna valor inteiro entre 1 e 4
int menu(){


	printf("\n==== Programa Calculadora Básica versão 2 ====");
	printf("\n1 = somar");
	printf("\n2 = subtrair");
	printf("\n3 = multiplicar");
	printf("\n4 = dividir");
	
	int escolha;	
		
	do {
		printf("\nQual? ");	
		scanf("%d", &escolha);
		
	}while (escolha < 1 || escolha > 4);
	
	return escolha;
}

float ler_numero(char *mensagem){
	float num;

	printf(mensagem);
	scanf("%f", &num);
	
	return num;	
}


int main (){
	
	system("chcp 1252");
	
	float n1, n2, resultado;

	int opcao = menu(); //retorna valor entre 1 e 4
	
	n1 = ler_numero("\nPrimeiro número: ");
	n2 = ler_numero("\nSegundo número: ");
	
	
	switch (opcao){
		
		case 1:
			resultado = n1 + n2;
			break;
		
		case 2:
			resultado = n1 - n2;
			break;
		
		case 3:
			resultado = n1 * n2;
			break;
		
		case 4:
			resultado = n1 / n2;
			break;		
	}
	
	printf("\nResultado = %.2f\n\n", resultado);
		
	system("pause");
	return 0;
}
