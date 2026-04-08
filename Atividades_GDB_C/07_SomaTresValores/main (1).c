//Faça um programa para ler três valores e imprimir a soma dos mesmos.

#include <stdio.h>

int main()
{
    
    int n1, n2, n3, soma;
    
    printf("Digite um número: ",n1);
    scanf("%d",&n1);
    printf("Digite outro número: ",n2);
    scanf("%d",&n2);
    printf("Digite outro número: ",n2);
    scanf("%d",&n3);
    
    soma = n1 + n2 + n3;
    
    printf("A soma de %d + %d + %d = %d", n1, n2, n3, soma);

    return 0;
}