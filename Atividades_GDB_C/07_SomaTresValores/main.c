/* - Lê três números e exibe a soma deles.

     Ana Luisa Reis - 08/04/26
*/

#include <stdio.h>

int main()
{
    
    int n1, n2, n3, soma;   //variáveis
    
    printf("Digite um número: ",n1);
    //leitura de n1
    scanf("%d",&n1);
    printf("Digite outro número: ",n2);
    //leitura de n2
    scanf("%d",&n2);
    printf("Digite outro número: ",n2);
    //leitura de n3
    scanf("%d",&n3);
    
    //soma dos valores recebidos
    soma = n1 + n2 + n3;
    
    printf("A soma de %d + %d + %d = %d", n1, n2, n3, soma);

    return 0;
}