/*-Programa que lê um número e informa qual o mês.

        Ana Luisa Reis - 02/05/2026*/

#include <stdio.h>

int main()
{
    //variável
    int mes;
    
    printf("Digite um número: ");
    scanf("%d",&mes);
    
    //condição de mês
    if (mes < 1 || mes > 12){
        printf("Valor não corresponde a nenhum mês.");
    }
    else if(mes == 1){
        printf("Janeiro");
    }
    else if(mes == 2){
        printf("Fevereiro");
    }
    else if(mes == 3){
        printf("Março");
    }
    else if(mes == 4){
        printf("Abril");
    }
    else if(mes == 5){
        printf("Maio");
    }
    else if(mes == 6){
        printf("Junho");
    }
    else if(mes == 7){
        printf("Julho");
    }
    else if(mes == 8){
        printf("Agosto");
    }
    else if(mes == 9){
        printf("Setembro");
    }
    else if(mes == 10){
        printf("Outubro");
    }
    else if(mes == 11){
        printf("Novembro");
    }
    else if(mes == 12){
        printf("Dezembro");
    }
    
    return 0;
}
