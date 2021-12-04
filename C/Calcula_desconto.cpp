#include <stdio.h>
#include <stdlib.h>


int main(){
    // declaração das variaveis
    float preco1, preco2, total, desconto, preco_final;
    
    system("chcp 1252");
    
    printf("\nPreço do primeiro produto: ");
    scanf("%f", &preco1);
    printf("\nPreço do segundo produto: ");
    scanf("%f", &preco2);
     printf("\nValor do desconto: ");
    scanf("%f", &desconto);
    total= preco1+preco2;
    preco_final= total*(100-desconto)/100;
    printf("\nPreço final com desconto = R$ %.2f", preco_final);
    
    
    printf("\n\n");
    system("pause");
    return 0;
}
