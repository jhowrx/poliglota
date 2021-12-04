//forca.cpp

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char palavra_secreta[]= "PARALELEPIPEDO\0"; //o \0 serve para pausar a procura pela palavra barato
const int TAMANHO = strlen(palavra_secreta);



//prototipagem da função
void grafico();                

int main () {
    system("chcp 1252"); //para aparecer os caracteres no programa
    system("color 10"); //mudar a cor do programa
    
    grafico();
    
    
    printf("\n\n");
    system("pause");
    return 0;
}        

void grafico(){
    
    for (int i=0; i<TAMANHO; i++){
        printf("__ ");    
    }    
    
}

