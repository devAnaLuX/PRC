/*- Programa que lê a distância percorrida e o tempo da viagem, faz o cálculo da velocidade
média e imprime se a velocidade é superior ou inferior a 80km/h.

    Ana Luisa Reis - 27/04/2026
*/

#include <stdio.h>

int main()
{
    float km, horas, velocidadeMedia;  //variáveis
    
    printf("Digite a distância(km): ");
    //leitura da distância
    scanf("%f",&km);
    printf("Digite o tempo de viagem: ");
    //leitura do tempo
    scanf("%f",&horas);
    
    //cálculo da velocidade média
    velocidadeMedia = km/horas;
    
    //condição
    if (velocidadeMedia > 80){
        printf("Velocidade superior a 80km/h.");
    }
    else{
        printf("Velocidade inferior a 80km/h.");
    }

    return 0;
}