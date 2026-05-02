/*- Programa lê um número e diz se ele é divisível por 2 ou 3, por ambos ou
por nenhum dos dois.

        Ana Luisa Reis - 01/05/2026*/

#include <stdio.h>

int main()
{
    //variáveis
    int numero, dois, tres;
    
    printf("Digite um número: ");
    //leitura do numero
    scanf("%d",&numero);
    
    //cálculo de divisão
    dois = numero%2;
    tres = numero%3;
    
    //condição
    if (dois == 0 && tres == 0){
        printf("%d é divisível por 2 e 3", numero);
    }
    else if (dois == 0){
        printf("%d é divisível por 2.", numero);
    }
    else if (tres == 0){
        printf("%d é divisível por 3.", numero);
    }
    else{
        printf("%d não é divisível por 2 e nem por 3.",numero);
    }

    return 0;
}
