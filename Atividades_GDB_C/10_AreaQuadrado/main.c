//Faça um programa para ler um valor correspondente a um lado de um quadrado e mostrar a
//ÁREA (usar float).


#include <stdio.h>

int main()
{
    float lado, area;
    
    printf("Digite o lado de um quadrado: ");
    scanf("%f",&lado);
    
    area = lado*lado;
    
    printf("A área do quadrado é %.2f", area);

    return 0;
}
