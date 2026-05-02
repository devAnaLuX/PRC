/*- Programa que lê um número e diz se ele é par ou ímpar.

        Ana Luisa Reis - 29/04/2026*/
#include <stdio.h>

int main()
{
    int numero, paridade;

    printf("Digite um número: ");
    scanf("%d",&numero);
    
    paridade = numero%2;
    
    if(paridade == 0){
        printf("%d é par.", numero);
    }else{
        printf("%d é ímpar.", numero);
    }
    
    return 0;
}