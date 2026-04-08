/*Faça um programa para ler dois valores (variáveis A e B) e efetuar as operações de adição,
subtração, multiplicação e
divisão de A por B apresentado os quatro resultados obtidos.
*/
#include <stdio.h>

int main()
{
    float A, B, ad, sub, mult, divis;
    printf("Digite um número: ");
    scanf("%f",&A);
    printf("Digite outro número: ");
    scanf("%f",&B);
    
    ad = A + B;
    sub = A - B;
    mult = A * B;
    divis = A / B;
    
    printf("Soma: %.2f\n", ad);
    printf("Subtração: %.2f\n", sub);
    printf("Multiplicação: %.2f\n", mult);
    printf("Divisão: %.2f\n", divis);


    return 0;
}
