#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <conio.h>
#include <ctype.h>

//prot�tipo
void esperarOnibus();

int main (int argc, char *argv[]){
    system ("chcp 1252");
    
   
    char chegou = 'N';
    
   while (chegou != 'S') {
    esperarOnibus(); // enquanto onibus nao chega
    printf("\nChegou �nibus? (S)im ou (N)�o?");
    chegou = toupper(getche());
   } 
    
    printf("\nSubindo no �nibus..");
    Sleep(1000);
    
     printf("\nPegando passagem..");
     Sleep(1000);
     
     
    printf("\n\n");
    system("pause");
    return 0;
}

void esperarOnibus(){
    printf ("\nPassageiro sperando o �nibus...aguarde 3 segundos...");
    Sleep(3000); //dorme 3 segundos
}
