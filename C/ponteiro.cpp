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
    pa = &a; //obt�m e guarda o ponteiro de a em pa 
    pb = &b; //obt�m e guarda o ponteiro de b em pb
    
    printf("\na = %d", a); //2
    printf("\nb = %d", b); //3
    printf("\npa = %p", pa); // 0061FEF4
    printf("\nb = %p", pb); //  0061FEF0
    
    int va = *pa; //obt�m o valor contido no endere�o pa
    int vb = *pb; //obt�m o valor contido no endere�o pb
    printf("\nva=%d \nvb=%d", va, vb);
    
    int soma =  *pa + *pb; //2 + 3
    printf("\nsoma = %d", soma);
    
    char vetor1[] = "isto � um vetor de caracteres\0";
    char *vetor2 = "todo vetor � um ponteiro\0";

    printf ("\nvetor1[] = %s", vetor1);
    printf ("\nvetor2[] = %s", vetor2);
    
    char *frase = "o rato roeu a roupa do rei de Roma";
    int tamanho = strlen(frase);
    printf("\n\nTamanho da frase = %d", tamanho);
    
    printf("\nFrase = "); 
    for (int i=0; i<tamanho; i++) { //for padr�o acessando a string
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
    
    
    
