/*- Programa que lê o salário e o cargo de um funcionário, faz o cálculo do aumento baseado
no código do cargo e imprime o salário antigo, o salário novo e a diferença entre eles.

        Ana Luisa Reis - 02/05/2026*/
        
#include <stdio.h>

int main()
{
    //variáveis
    float salario, salarioNovo, aumento;
    int cargo;
    
    printf("Digite seu salário: ");
    scanf("%f",&salario);
    printf("Digite o código do seu cargo: ");
    scanf("%d",&cargo);
    
    //escolha - caso
    switch(cargo){
        case 101:
            //cálculo do salário novo
            aumento = salario * 0.1;
            salarioNovo = salario + aumento;
            
            printf("Salário antigo: R$%.2f", salario);
            printf("\nSalário novo: R$%.2f", salarioNovo);
            printf("\nDiferença: R$%.2f", aumento);
        break;
        
        case 102:
            aumento = salario * 0.2;
            salarioNovo = salario + aumento;
            
            printf("Salário antigo: R$%.2f", salario);
            printf("\nSalário novo: R$%.2f", salarioNovo);
            printf("\nDiferença: R$%.2f", aumento);
        break;
        
        case 103:
            aumento = salario * 0.3;
            salarioNovo = salario + aumento;
            
            printf("Salário antigo: R$%.2f", salario);
            printf("\nSalário novo: R$%.2f", salarioNovo);
            printf("\nDiferença: R$%.2f", aumento);
        break;

        //caso não seja outra opção diferente das de cima
        default:
            aumento = salario * 0.4;
            salarioNovo = salario + aumento;
            
            printf("Salário antigo: R$%.2f", salario);
            printf("\nSalário novo: R$%.2f", salarioNovo);
            printf("\nDiferença: R$%.2f", aumento);
    }

    return 0;
}
