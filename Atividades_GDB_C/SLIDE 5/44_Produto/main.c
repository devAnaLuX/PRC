/*- Programa que lê o código de um produto e a quantidade, faz o cálculo de quanto
é devido por um cliente e exibe o total.

        Ana Luisa Reis - 02/05/2026*/
#include <stdio.h>

int main()
{
    int codigo, quantidade;
    float total;
    
    printf("Digite o código do produto: ");
    scanf("%d",&codigo);
    printf("Digite a quantidade: ");
    scanf("%d",&quantidade);
    
    switch(codigo){
        case 11:
            total = 5.3*quantidade;
            printf("Total: R$%.2f", total);
        break;
        case 22:
            total = 6.0*quantidade;
            printf("Total: R$%.2f", total);
        break;
        case 33:
            total = 3.2*quantidade;
            printf("Total: R$%.2f", total);
        break;
        case 44:
            total = 2.5*quantidade;
            printf("Total: R$%.2f", total);
        break;
        default: 
        printf("Código inválido.");
    }

    return 0;
}
