/*- Leitura de dois valores, a partir disso é feita a conta de adição, subtração,
multiplicação e divisão; depois exibe o resultado de cada uma.

     Ana Luisa Reis - 08/04/26
*/

#include <stdio.h>

int main()
{
    float A, B, ad, sub, mult, divis; //variáveis
    printf("Digite um número: ");
    //Leitura de A
    scanf("%f",&A);
    printf("Digite outro número: ");
    //Leitura de B
    scanf("%f",&B);
    
    //cálculo de adição
    ad = A + B;
    //cálculo de subtração
    sub = A - B;
    //cálculo de multiplicação
    mult = A * B;
    //cálculo de divisão
    divis = A / B;
    
    printf("Soma: %.2f\n", ad);
    printf("Subtração: %.2f\n", sub);
    printf("Multiplicação: %.2f\n", mult);
    printf("Divisão: %.2f\n", divis);


    return 0;
}
