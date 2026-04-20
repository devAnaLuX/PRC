/* - O programa faz lê quanto foi pago e quanto é o litro da gasolina, a partir disso faz
o cálculo da quantidade de litros colocados.

 Ana Luísa Reis - 15/04/26
*/

#include <stdio.h>

int main()
{
    float gasolinaLitros, pagamento, precoLitro;  //variáveis
    
    printf("Digite o valor do pagamento: ");
    scanf("%f",&pagamento);
    printf("Digite o preço do litro da gasolina: ");
    scanf("%f",&precoLitro);
    
    gasolinaLitros = pagamentoprecoLitro;  //cálculo da quantidade de litros
    
    printf("Você conseguiu colocar %.2f litros.", gasolinaLitros); //exibe a quantidade de litros colocados

    return 0;
}