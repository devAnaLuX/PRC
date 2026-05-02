/*3.O restaurante “Bom e Barato" cobra R$ 45,90 por quilo de comida, porém sua balança 
só marca a pesagem em gramas. Faça um
programa para ler o valor pesado de um cliente e informar o preço a pagar pelo prato.

        Ana Luisa Reis - 15/04/26
*/


#include <stdio.h>

int main()
{
    float kg, grama, preco; //variáveis
    
    printf("Qual foi o valor pesado? ");
    //leitura do peso em grama
    scanf("%f",&grama);
    
    //conversão de kg para gramas
    kg = grama/1000;
    //cálculo de preço da comida
    preco = kg*45.9;
    
    printf("O preço a pagar é de R$%.2f",preco);

    return 0;
}