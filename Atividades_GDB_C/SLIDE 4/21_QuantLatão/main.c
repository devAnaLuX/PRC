/*- Lê a quantidade de latão e calcula e imprime a quantidade de cobre e zinco
necessários.

        Ana Luisa Reis - 15/04/26
*/

#include <stdio.h>

int main()
{   
    float quantLatao, cobre, zinco; //variáveis
    
    printf("Quantos quilos de latão deseja produzir? ");
    //leitura quantidade latão
    scanf("%f",&quantLatao);
    
    //cálculo quantidade de cobre
    cobre = quantLatao*0.7;
    //cálculo quantidade de zinco
    zinco = quantLatao*0.3;
    
    printf("São necessários %.1fkg de cobre e %.1fkg de zinco.", cobre, zinco);

    return 0;
}
