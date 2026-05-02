/*- Exibe a soma dos dois valores lidos.

    Ana Luisa Reis - 08/04/26
    
*/

#include <stdio.h>

int main()
{
    
    int n1, n2, soma;
    
    printf("Digite um número: ",n1);
    scanf("%d",&n1);
    printf("Digite outro número: ",n2);
    scanf("%d",&n2);
    
    soma = n1 + n2;
    
    printf("A soma de %d + %d = %d", n1, n2, soma);

    return 0;
}