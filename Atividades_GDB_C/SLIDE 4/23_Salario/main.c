/*- Lê dias trabalhos e faz o cálculo do salário liquido que deve ser pago

        Ana Luisa Reis - 15/04/2026
*/

#include <stdio.h>

int main()
{
    //variáveis
    int dias;
    float bruto, liquido, IR;
    
    printf("Digite o número de dias trabalhados: ");
    //leitura de dias trabalhados
    scanf("%d",&dias);
    
    //cálculo de salário bruto
    bruto = 150*dias;
    //cálculo de imposto
    IR = bruto * 0.08;
    //cálculo de salário líquido
    liquido = bruto - IR;
    
    printf("Deve ser pago R$%.2f.", liquido);

    return 0;
}
