/*- Programa que lê uma letra e exibe se o usuário é homem ou mulher.

        Ana Luisa Reis - 01/05/2026*/

#include <stdio.h>
#include <string.h>

int main()
{
    //variável
    char sexo [2];
    
    printf("Digite seu sexo (F) ou (M): ");
    //leitura do sexo
    scanf("%s",&sexo);
    
    //condição
    //strcmp == string compare, compara duas strings e retorna um valor
    //se esse valor for igual a 0 ele imprime a mensagem
    if(strcmp(sexo, "F") == 0){
        printf("Mulher");
    }
    else if(strcmp(sexo, "M") == 0){
        printf("Homem");
    }
    else{
        printf("Letra inválida.");
    }

    return 0;
}
