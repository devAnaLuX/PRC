/*- Programa que lê a quantidade de litros colocados e o tipo de combustível, aplicando o desconto de acordo
com ambas as variáveis.

        Ana Luisa Reis - 02/05/2026*/

#include <stdio.h>

int main()
{
    //variáveis
    float litros, desconto, preco, total;
    int combustivel;
    
    printf("Digite a quantidade de litros: ");
    scanf("%f",&litros);
    printf("----COMBUSTÍVEL----");
    printf("1 - Álcool");
    printf("2 - Gasolina");
    printf("Digite o tipo de combustível: ");
    scanf("%d",&combustivel);
    
    //escolha - caso
    //tipo de combustível
    switch (combustivel){
        case 1: 
            //decisão
            if(litros>20){
                //cálculo do preço
                preco = 4.39*litros;
                //cálculo do desconto
                desconto = preco* 0.05;
                //cálculo do total
                total = preco-desconto;
                printf("Total: R$%.2f", total);
            }
            else{
                preco = 4.39*litros;
                desconto = preco * 0.03;
                total = preco-desconto;
                printf("Total: R$%.2f", total);
            }
        break;
        case 2:
            if(litros>15){
                preco = 5.29*litros;
                desconto = preco * 0.08;
                total = preco-desconto;
                printf("Total: R$%.2f", total);
            }
            else{
                preco = 5.29*litros;
                desconto = preco * 0.035;
                total = preco-desconto;
                printf("Total: R$%.2f", total);
            }
        break;
    }

    return 0;
}
