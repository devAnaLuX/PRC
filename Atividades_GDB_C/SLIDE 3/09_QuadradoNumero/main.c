/* - Lê um valor e imprime o quadrado dele.

     Ana Luisa Reis - 08/04/26
*/


#include <stdio.h>

int main()
{
    int numero, quadrado; //variáveis
    
    printf("Digite um número: ");
    //leitura do numero
    scanf("%d",&numero);
    
    //Cálculo do quadrado
    quadrado = numero * numero;
    
    printf("O quadrado %d é %d", numero, quadrado);

    return 0;
}