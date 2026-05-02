/*- Programa que lê uma letra e diz se é uma vogal, consoante ou outro símbolo.

        Ana Luisa Reis - 01/05/2026*/

#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main()
{
    //variável    
    char letra[2];
    
    printf("Digite uma letra: ");
    //leitura da letra
    scanf("%s",&letra);
    
    //converte uma letra minuscula pra maiuscula
    letra[0] = toupper(letra[0]);
    
    //"não é uma letra"
    //verifica se é uma letra
    if(!isalpha(letra[0])){
        printf("OUTRO SÍMBOLO!");
    }
    else if(strcmp(letra, "A") == 0 || strcmp(letra, "E") == 0 || strcmp(letra, "I") == 0 || strcmp(letra, "O") == 0 || strcmp(letra, "U") == 0 ){
        printf("VOGAL!");
    }
    else{
        printf("CONSOANTE!");
    }

    return 0;
}
