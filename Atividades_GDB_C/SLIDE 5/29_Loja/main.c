/*- Programa de uma loja que lê o valor da mercadoria e a forma de pagamento e, a partir disso,
faz o cálculo do desconto de acordo com a forma de pagamento.

        Ana Luisa Reis - 29/04/2026*/
        
#include <stdio.h>

int main()
{
    //variáveis
    int pagamento;
    float mercadoria, desconto;
    
    printf("Digite o preço da mercadoria: ");
    //leitura do preço da mercadoria
    scanf("%f",&mercadoria);
    printf("----PAGAMENTO----\n");
    printf("5 - Cartão de crédito\n");
    printf("6 - À vista\n");
    printf("Digite a forma de pagamento: ");
    //leitura da forma de pagamento
    scanf("%d",&pagamento);
    
    printf("----NOTA----\n");
    
    //condição para efetuar o desconto
    if(pagamento == 5 ){
        desconto = mercadoria * 0.1;
        mercadoria = mercadoria - desconto;
        printf("Pagamento: Cartão de crédito\n");
        
    }else{
        desconto = mercadoria * 0.2;
        mercadoria = mercadoria - desconto;
        printf("Pagamento: À vista\n");
    }
    
    printf("Total: R$%.2f", mercadoria);

    return 0;
}
