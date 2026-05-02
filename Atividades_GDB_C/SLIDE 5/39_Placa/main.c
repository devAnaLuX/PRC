/*- Programa que lê o último número de uma placa e diz o mês do pagamento do imposto.

        Ana Luisa Reis - 01/05/2026*/

#include <stdio.h>

int main()
{
    //variáveis
    int numero;
    
    printf("Digite o último dígito da placa do seu automóvel: ");
    scanf("%d",&numero);
    
    //condição de mês de pagamento do imposto
    if(numero == 1){
        printf("Pagar imposto em janeiro.");
    }
    else if(numero == 2){
        printf("Pagar imposto em fevereiro.");
    }
    else if(numero == 3){
        printf("Pagar imposto em março.");
    }
    else{
        printf("Pagar imposto em abril.");
    }

    return 0;
}
