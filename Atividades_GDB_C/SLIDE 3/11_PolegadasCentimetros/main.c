/* - Lê um valor em polegadas e converte para centímetros.

     Ana Luisa Reis - 08/04/26
*/
#include <stdio.h>

int main()
{
    float polegadas, centimentros; //variáveis
    
    printf("Digite um valor em polegadas: ");
    //leitura de polegadas
    scanf("%f",&polegadas);
    
    //cálculo de conversão
    centimentros = polegadas * 2.54;
    
    printf("%.2f polegadas é igual a %.2f centimentros.", polegadas, centimentros);

    return 0;
}
