//pilha.cpp
//implementação de uma pilha com base em um vetor

#include <stdio.h>
#include <stdlib.h>

#define TAMANHO 6

#define VAZIO -1
#define MOSTRAR 1
#define INICIALIZAR 2
#define EMPILHAR 3
#define DESEMPILHAR 4
#define SAIR 5

int pilha [TAMANHO]; 
int topo = 0;

//prototipagem de função(função no final)
void inicializar_pilha();
void empilhar (int valor); 
void desempilhar();
void mostrar_pilha();
int  menu();

int main (){
    system("chcp 1252"); //para aparecer acento no programa
    int escolha, numero;
    
    do{
        
        escolha = menu();
        
        switch (escolha){
        
           case INICIALIZAR:
             inicializar_pilha();
             break;
                
           case EMPILHAR:
                printf("\nValor a empilhar: ");
                scanf("%d", &numero);
                empilhar(numero);
                break;
              
           case DESEMPILHAR:
             desempilhar();
             break;
            
           case MOSTRAR:
             mostrar_pilha();
             break;
             
           case SAIR:
             printf("\nSaindo do programa.... Adeus!!");
             break;
       }
          
    } while (escolha != SAIR);         
   
   
   
    printf("\n\n");
    system ("pause");
    return 0;
}


void inicializar_pilha(){
    //inicializa a pilha
    for (int i=0; i<TAMANHO; i++){
     pilha [i]= VAZIO;//-1 significa vazio(por convenção)
    }
    topo = 0;
    printf("\nPilha inicializada\n");   
}

void empilhar (int valor){
    if (topo < TAMANHO){
      printf ("\n%d foi empilhado\n", valor);
      pilha [topo]=valor;
      topo++;
    }else {
        printf("\n Stack overflow!!!");
    }                  
}

void desempilhar(){
    if (topo > 0){
     topo--;
     int valor = pilha[topo];
     printf("\n%d foi desempilhado",valor);
     pilha[topo]=-1;
    }else{
        printf("\n Pilha vazia!!!\n");
    }
}
  
void mostrar_pilha () {
    printf("\n----PILHA----\n[");
    
    for(int i=0; i<TAMANHO; i++){
        printf ("%d ", pilha[i]);
    }
    printf("]\nTOPO = %d\n", topo);
}

int menu() {
    int opcao = -1;
    
    do{
        printf("\n\n=====  Programa PILHA =====");
        printf("\n%d = mostrar pilha", MOSTRAR);
        printf("\n%d = inicializar pilha", INICIALIZAR);
        printf("\n%d = empilhar", EMPILHAR);
        printf("\n%d = desempilhar", DESEMPILHAR);
        printf("\n%d = sair", SAIR);
        printf("\nQual opção? ");
        scanf("%d", &opcao); // aguarda digitar um inteiro
        
    }while (opcao <MOSTRAR || opcao >SAIR);    
        
        
    return opcao;
}
