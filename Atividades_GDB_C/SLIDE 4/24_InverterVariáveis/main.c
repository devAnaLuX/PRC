/*- Lê dois números e inverte o valor das variáveis.

        Ana Luisa Reis - 23/03/2008
*/

#include <stdio.h>

int main()
{
    int A = 0, B = 0; //variáveis
    
    printf("Digite A: ");
    //leitura de A
    scanf("%d",&A);
    printf("Digite B: ");
    //Leitura de B
    scanf("%d",&B);
   
    //EX: A=20  B=10
    //A = 20+10 --- A=30;
    A = A+B;
    //B = 30-10 --- B=20;
    B = A-B;
    //A= = 30-20 --- A=10;
    A = A-B;
    
    
    printf("A: %d e B: %d", A, B);

    return 0;
}