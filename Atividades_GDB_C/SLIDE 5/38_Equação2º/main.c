/*- Programa que faz o cálculo de uma equação do segundo grau, motrando qual tipo
de raiz de acordo com o delta e exibindo as raízes.

        Ana Luisa Reis - 01/05/2026*/

#include <stdio.h>
#include <math.h>

int main()
{
    //variáveis
    int A, B, C;
    float delta, X1, X2;
    
    printf("Digite A: ");
    scanf("%d",&A);
    printf("Digite B: ");
    scanf("%d",&B);
    printf("Digite C: ");
    scanf("%d",&C);
    
    //cálculo do delta
    delta = pow(B,2) - 4*A*C;
    //cálculo das raízes
    X1 = ((-B + sqrt(delta))/(2*A));
    X2 = ((-B - sqrt(delta))/(2*A));
    
    //condição para as raízes
    if(delta<0){
        printf("Raízes não reais.");
    }
    else if(delta == 0){
        printf("Raíz única.\n");
        printf("Raiz: %.2f",X1);
    }
    else if(delta>0){
        printf("Raízes distintas.\n");
        printf("Raiz: %.2f\n",X1);
        printf("Raiz: %.2f",X2);
    }
    
    
    return 0;
}
