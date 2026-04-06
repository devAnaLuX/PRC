/*5 - Crie um programa que declare uma variável global, uma variável local e atribua valor
para ambas dentro função main. Exiba os valores atribuídos.
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
