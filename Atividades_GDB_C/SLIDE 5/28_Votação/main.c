/*- Programa que lê o ano de nascimento de uma pessoa e informa se ela pode
ou não votar esse ano.

        Ana Luisa Reis - 29/03/2026*/
#include <stdio.h>

int main()
{
    int anoNascimento, idade;//variáveis
    
    printf("Digite seu ano de nascimento: ");
    //leitura do ano de nascimento
    scanf("%d",&anoNascimento);
    
    //cálculo de idade
    idade = 2026 - anoNascimento;
    
    //condição de votação
    if(idade>=18){
        printf("Você pode votar esse ano!");
    }else{
        printf("Você não pode votar esse ano!");
    }

    return 0;
}
