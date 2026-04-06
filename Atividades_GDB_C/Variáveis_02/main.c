/* 3 -Criar um progrma que declare variáveis com os tipos int, float, double e char e 
atribua valores a estas variáveis. Exiba o valor de cada tipo.
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