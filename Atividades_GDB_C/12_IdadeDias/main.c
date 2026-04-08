/*Escreva um programa para ler a idade de uma pessoa e exibir quantos dias de vida ela possui.
Considere sempre anos “cheios" e que um ano possui 365 dias.
*/

#include <stdio.h>

int main()
{
    int idade, dias;
    
    printf("Digite sua idade: ");
    scanf("%d",&idade);
    
    dias = idade*365;
    
    printf("Sua idade em dias é %d", dias);

    return 0;
}
