/*- Programa que faz o cálculo da área do quadrado ou do círculo de acordo
com a escolha do usuário.

        Ana Luisa Reis - 02/05/2026*/
        
#include <stdio.h>

int main()
{
    //variáveis
    float lado, raio, area;
    int opcao;
    
    printf("----MENU----");
    printf("\n1 - Área do quadrado");
    printf("\n2 - Área do círculo");
    printf("\nEscolha uma opcão: ");
    scanf("%d",&opcao);

    //escolha - caso
    switch(opcao){
        case 1:
            printf("Digite o lado do quadrado: ");
            scanf("%f",&lado);
            
            //cálculo da area
            area = lado * lado;
            printf("Área do quadrado: %.2f", area);
            
        break;
        case 2:
            printf("Digite o raio do círculo: ");
            scanf("%f",&raio);
            
            area = 3.14*raio*raio;
            printf("Área do círculo: %.2f", area);
        break;
        default:
        printf("Opção inválida.");
    }

    return 0;
}
