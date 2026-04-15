/* - Uma variável global nome e uma local idade, os dois são exibidos.

     Ana Luisa Reis - 06/04/26
*/
#include <stdio.h>

    char nome [20] = "Ana Luísa";

int main()
{
    int idade = 18;
    
    printf("%s\n", nome);
    printf("%d", idade);

    return 0;
}
