//Faça um programa para ter um valor em quilogramas (Kg) e imprimir o equivalente em gramas (g).


#include <stdio.h>

int main()
{
    float kg, grama;
    
    printf("Digte um valor em kg: ");
    scanf("%f",&kg);
    
    grama = kg*1000;
    
    printf("O valor em gramas é %.2f",grama);

    return 0;
}
