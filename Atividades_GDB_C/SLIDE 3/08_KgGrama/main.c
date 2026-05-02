/* - Lê um valor em quilograma e converte pra grama.

     Ana Luisa Reis - 08/04/26
*/


#include <stdio.h>

int main()
{
    float kg, grama; //variáveis
    
    printf("Digte um valor em kg: ");
    //leitura de kg
    scanf("%f",&kg);
    
    //cálculo de conversão
    grama = kg*1000;
    
    printf("O valor em gramas é %.2f",grama);

    return 0;
}
