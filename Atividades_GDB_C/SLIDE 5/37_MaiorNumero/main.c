/*- Programa que lê 3 números e exibe o maior deles.

        Ana Luisa Reis - 01/05/2026*/

#include <stdio.h>

int main()
{
    //variáveis
    int num1, num2, num3;
    
    printf("Digite um numero: ");
    scanf("%d",&num1);
    printf("Digite outro numero: ");
    scanf("%d",&num2);
    printf("Digite outro numero: ");
    scanf("%d",&num3);
    
    //condição de maior número
    if(num1>num2 && num1>num3){
        printf("%d",num1);
    }
    else if(num2>num1 && num2>num3){
        printf("%d",num2);
    }
    else if(num3>num1 && num3>num2){
        printf("%d",num3);
    }

    return 0;
}
