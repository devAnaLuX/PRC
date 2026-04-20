/* - Cálculo do volume de uma lata de oleo.

        Ana Luisa Reis - 15/04/26
*/


#include <stdio.h>
#include <math.h>

int main(){
    
    #define PI 3.14 //constante PI
    
    float raio, altura, volume; //variáveis
    
    printf("Digite o raio da lata de óleo: ");
    //leitura do raio
    scanf("%f",&raio);
    printf("Digite a altura: ");
    //leitura da altura
    scanf("%f",&altura);
    
    //cálculo do volume
    volume = PI*pow(raio,2)*altura;
    
    printf("O volume da lata de oleo é %.2f", volume);

    return 0;
}
