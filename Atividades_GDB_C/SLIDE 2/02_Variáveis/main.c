/* - Exibe as variáveis do tipo int, float, double e char na tela

     Ana Luisa Reis - 06/04/26
*/
#include <stdio.h>

int main()
{
    int id = 1;
    float numero = 20.4;
    double debito = 2055.5432;
    char sexo = 'F';
    
    printf("%d\n", id);
    printf("%f\n", numero);
    printf("%lf\n", debito);
    printf("%c", sexo);


    return 0;
}