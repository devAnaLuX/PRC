/* - Lê o lado de um quadrado e cálcula a sua área.

     Ana Luisa Reis - 08/04/26
*/


#include <stdio.h>

int main()
{
    float lado, area; //variáveis
    
    printf("Digite o lado de um quadrado: ");
    //leitura do lado
    scanf("%f",&lado);
    
    //cálculo da area
    area = lado*lado;
    
    printf("A área do quadrado é %.2f", area);

    return 0;
}
