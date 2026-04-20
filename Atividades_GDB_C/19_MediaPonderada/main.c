/* - Lê 4 notas, faz e exibe a média ponderada.

        Ana Luisa Reis - 15/04/26
*/


#include <stdio.h>

int main()
{
    float nota1, nota2, nota3, nota4, media; //variáveis
    
    printf("Digite nota1: ");
    //lê nota1
    scanf("%f",&nota1);
    printf("Digite nota2: ");
    //lê nota2
    scanf("%f",&nota2);
    printf("Digite nota3: ");
    //lê nota3
    scanf("%f",&nota3);
    printf("Digite nota4: ");
    //lê nota4
    scanf("%f",&nota4);
    
    //cálculo da média ponderada
    media = ((nota1*1)+(nota2*2)+(nota3*3)+(nota4*4))/10;
    
    printf ("A média ponderada é: %.2f", media);
    
    return 0;
}
