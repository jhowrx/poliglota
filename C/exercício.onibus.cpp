#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <conio.h>
#include <ctype.h>

//protótipo
void esperarOnibus();

int main (int argc, char *argv[]){
    system ("chcp 1252");
    
   
    char chegou = 'N';
    
   while (chegou != 'S') {
    esperarOnibus(); // enquanto onibus nao chega
    printf("\nChegou ônibus? (S)im ou (N)ão?");
    chegou = toupper(getche());
   } 
    
    printf("\nSubindo no ônibus..");
    Sleep(1000);
    
     printf("\nPegando passagem..");
     Sleep(1000);
     
     
    printf("\n\n");
    system("pause");
    return 0;
}

void esperarOnibus(){
    printf ("\nPassageiro sperando o ônibus...aguarde 3 segundos...");
    Sleep(3000); //dorme 3 segundos
}
