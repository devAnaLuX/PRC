/*- Programa que lê dois valores e imprime se eles estão em ordem ou não.

        Ana Luisa Reis - 01/05/2026*/ 

#include <stdio.h>

int main()
{
    //variáveis
    int valor1, valor2;
    
    printf("Digite um valor: ");
    //leitura do valor 1
    scanf("%d",&valor1);
    printf("Digite outro valor: ");
    //leitura do valor 2
    scanf("%d",&valor2);
    
    //condição para ordenação
    if(valor1<valor2){
        printf("EM ORDEM");
    }
    else {
        printf("FORA DE ORDEM");
    }

    return 0;
}