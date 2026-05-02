/* - Lê a idade e converte em dias de vida que ela possui.

     Ana Luisa Reis - 08/04/26
*/

#include <stdio.h>

int main()
{
    int idade, dias; //variáveis
    
    printf("Digite sua idade: ");
    //leitura idade
    scanf("%d",&idade);
    
    //cálculo de conversão
    dias = idade*365;
    
    printf("Sua idade em dias é %d", dias);

    return 0;
}
