/*- Programa que lê o valor da mercadoria e a forma de pagamento, a partir da forma de
pagamento é aplicado um desconto na mercadoria de acordo com a escolha da forma de 
pagamento.

        Ana Luisa Reis - 01/05/2026*/

#include <stdio.h>

int main()
{
    //variáveis
    int pagamento;
    float mercadoria, desconto, total;
    
    printf("Qual o preço da mercadoria? ");
    //leitura da mercadoria
    scanf("%f",&mercadoria);
    printf("----PAGAMENTO----\n");
    printf("5 - Cartão de Crédito\n");
    printf("6- À Vista\n");
    printf("7 - 3 vezes\n");
    printf("Qual a forma de pagamento? ");
    //leitura do pagamento
    scanf("%d",&pagamento);
    
    //condição de desconto
    if(pagamento == 5){
        desconto = mercadoria * 0.1;
        total = mercadoria - desconto;
        printf("Total com desconto: R$%.2f", total);
    }
    else if(pagamento == 6){
        desconto = mercadoria * 0.2;
        total = mercadoria - desconto;
        printf("Total com desconto: R$%.2f", total);
    }
    else if(pagamento == 7){
        desconto = mercadoria * 0.05;
        total = mercadoria - desconto;
        printf("Total com desconto: R$%.2f", total);
    }

    return 0;
}
