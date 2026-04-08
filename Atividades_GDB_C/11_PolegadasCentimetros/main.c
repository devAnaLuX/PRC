/*Faça um programa para ler um valor em polegadas e escrever o equivalente em centímetros.
1 polegada = 2.54 centímetros
*/
#include <stdio.h>

int main()
{
    float polegadas, centimentros;
    
    printf("Digite um valor em polegadas: ");
    scanf("%f",&polegadas);
    
    centimentros = polegadas * 2.54;
    
    printf("%.2f polegadas é igual a %.2f centimentros.", polegadas, centimentros);

    return 0;
}
