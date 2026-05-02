/*- Lê quantos refrigerantes de cada formato o comerciante comprou e, no final,
exibe a quantidade de litros que ele comprou.

        Ana Luisa Reis - 15/04/26
*/

#include <stdio.h>

int main()
{
    int opcao, quantidade;
    float litros;
    
    do{
        printf("------MENU------\n");
        printf("1 - Lata 355ml\n");
        printf("2 - Garrafa 290ml\n");
        printf("3 - Garrafa 2L\n");
        printf("4 - Sair\n");
        printf("Escolha opção: ");
        scanf("%d",&opcao);
        
        if(opcao!=4){
            printf("\nEscolha quantidade: ");
            scanf("%d",&quantidade);
        }
        
        switch (opcao){
            case 1: 
            litros += 0.355*quantidade;
            break;
            case 2:
            litros += 0.290*quantidade;
            break;
            case 3:
            litros += 2*quantidade;
        }
    }
    while(opcao!=4);
    
    printf("Você comprou %.2f litros de refrigerante.",litros);

    return 0;
}
