//Faça um programa para ler um valor e imprimir o quadrado deste número.


#include <stdio.h>

int main()
{
    int numero, quadrado;
    
    printf("Digite um número: ");
    scanf("%d",&numero);
    
    quadrado = numero * numero;
    
    printf("O quadrado %d é %d", numero, quadrado);

    return 0;
}