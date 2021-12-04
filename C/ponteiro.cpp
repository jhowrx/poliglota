// ponteiros.cpp

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main (int argc, char *argv[]){
    system ("chcp 1252");
    
    int a = 2; //armazena um valor inteiro
    int b = 3; //armazena outro valor inteiro
    int *pa; //armazena um ponteiro de um inteiro
    int *pb; //armazena um ponteiro de outro inteiro
    pa = &a; //obtém e guarda o ponteiro de a em pa 
    pb = &b; //obtém e guarda o ponteiro de b em pb
    
    printf("\na = %d", a); //2
    printf("\nb = %d", b); //3
    printf("\npa = %p", pa); // 0061FEF4
    printf("\nb = %p", pb); //  0061FEF0
    
    int va = *pa; //obtém o valor contido no endereço pa
    int vb = *pb; //obtém o valor contido no endereço pb
    printf("\nva=%d \nvb=%d", va, vb);
    
    int soma =  *pa + *pb; //2 + 3
    printf("\nsoma = %d", soma);
    
    char vetor1[] = "isto é um vetor de caracteres\0";
    char *vetor2 = "todo vetor é um ponteiro\0";

    printf ("\nvetor1[] = %s", vetor1);
    printf ("\nvetor2[] = %s", vetor2);
    
    char *frase = "o rato roeu a roupa do rei de Roma";
    int tamanho = strlen(frase);
    printf("\n\nTamanho da frase = %d", tamanho);
    
    printf("\nFrase = "); 
    for (int i=0; i<tamanho; i++) { //for padrão acessando a string
        printf("%c ", toupper(frase[i]));        
    }   
    
    
    printf("\nusando for com incremento do ponteiro:"); //for usando ponteiro
    for (;*frase!=0;){
        printf("%c ", *frase++); 
    }    
        
    
    printf("\n\n");
    system ("pause");
    return 0;
}
    
    
    
