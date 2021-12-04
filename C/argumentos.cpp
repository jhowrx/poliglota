//argumentos.cpp

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
    
    printf("\nQuantidade de argumentos: %d", argc);
    
    printf("\nPrimeiro argumento: %s", argv[0]);
    
    if (argc > 1){
        printf("\nSegundo argumento: %s", argv[1]);
    }
    
     if (argc > 2){
        printf("\nTerceiro argumento: %s", argv[2]);;
    } 
     
     
     
    printf("\n\n");
    system ("pause");
    return 0;
           
}





