/* - Lê dois números, multiplica os valores recebidos e exibe na tela o cálculo.

        Ana Luisa Reis - 08/04/26
*/


#include <stdio.h>

int main()
{
    int n1, n2, mult;    //variáveis
    
    printf("Digite um número: ",n1);
    //leitura variável n1
    scanf("%d",&n1); 
    printf("Digite outro número: ",n2);
    //leitura variável n2
    scanf("%d",&n2);
    
    //Cálculo das variáveis recebidas
    mult = n1 * n2;
    
    printf("A soma de %d + %d = %d", n1, n2, mult);

    return 0;
}
