/*- Lê 4 notas e exibe a média delas.

     Ana Luisa Reis - 08/04/26
*/

#include <stdio.h>

int main()
{
    float nota1, nota2, nota3, nota4, media; //variáveis
    
    printf("Digite a nota 1: ");
    //leitura nota1
    scanf("%f",&nota1);
    printf("Digite a nota 2: ");
    //leitura nota2
    scanf("%f",&nota2);
    printf("Digite a nota 3: ");
    //leitura nota3
    scanf("%f",&nota3);
    printf("Digite a nota 4: ");
    //leitura nota4
    scanf("%f",&nota4);
    
    //cálculo da média
    media = (nota1+nota2+nota3+nota4)/4;
    
    printf("A média é %.2f", media);

    return 0;
}
