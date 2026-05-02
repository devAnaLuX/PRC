/*- Programa que lê a temperatura corporal e diz se está com febre ou 
está normal.

        Ana Luisa Reis - 29/04/2026*/

#include <stdio.h>

int main()
{
    float temperatura;//variável
    
    printf("Digite sua temperatura corporal: ");
    //leitura da temperatura corporal
    scanf("%f",&temperatura);
    
    //condição para dizer se está com febre ou não
    if(temperatura>37.5){
        printf("Está com febre!");
    }else{
        printf("Está normal!");
    }

    return 0;
}
