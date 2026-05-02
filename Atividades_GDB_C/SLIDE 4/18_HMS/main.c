/* - Lê segundos e exibe a hora:minutos:segundos.

        Ana Luisa Reis - 15/04/26
*/


#include <stdio.h>

int main()
{
    int segundos, segundos2,  minutos, horas; //variáveis
    
    printf("Digite os segundos: ");
    //leitura segundos
    scanf("%d",&segundos);
    
    //cálculo de horas
    horas = segundos/3600;
    //cálculo de minutos
    minutos = ((segundos-(horas*3600))/60);
    //cálculo de segundos
    segundos2 = segundos - (minutos*60) - (horas*3600);

    
    printf("%d:%d:%d", horas, minutos, segundos2);

    return 0;
}
