/*- Programa que lê os anos de serviço, a quantidade de dependentes e o salário dos funcionários e informa
se há o direito de um aumento.

        Ana luisa Reis - 01/05/2026*/
#include <stdio.h>

int main()
{
    //variáveis
    int anosServico, dependentes;
    float salario, salario2, aumento;
    
    printf("Digite quantos anos de serviço você tem: ");
    scanf("%d",&anosServico);
    
    //condição para saber se o funcionário tem direito a aumento
    if(anosServico>4){
        printf("Digite quantos dependentes você tem: ");
        scanf("%d",&dependentes);
        if(dependentes>3){
            printf("Digite o seu salário: ");
            scanf("%f",&salario);
            if(salario>2000.0){
                printf("Você tem direito ao aumento!!\n");
                
                //cálculo do aumento e do novo salário
                aumento = salario * 0.2;
                salario2 = salario + aumento;
                
                printf("Salário antigo: R$%.2f", salario);
                printf("\nSalário atual: R$%.2f", salario2);
                printf("\nDiferença de salário: R$%.2f", aumento);
                
            }
            else{
                printf("Você não possui o salário necessário.");
            }
        }
        else{
            printf("Você não possui a quantidade de dependentes necessários.");
        }
    }
    else{
        printf("Você não tem os anos de serviço necessários.");
    }
    
    return 0;
}
