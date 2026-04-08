//Faça um programa para ler dois valores e imprimir a multiplicação dos mesmos.


#include <stdio.h>

int main()
{
    int n1, n2, mult;
    
    printf("Digite um número: ",n1);
    scanf("%d",&n1);
    printf("Digite outro número: ",n2);
    scanf("%d",&n2);
    
    mult = n1 * n2;
    
    printf("A soma de %d + %d = %d", n1, n2, mult);

    return 0;
}
