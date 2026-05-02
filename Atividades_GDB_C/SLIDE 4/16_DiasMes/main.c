/*- Lê um dia e o mês e informa quantos dias se passaram desde o inicio do ano.

     Ana Luisa Reis - 15/04/26
*/

#include <stdio.h>

int main()
{
    int dia, mes, diasTotais; //variáveis
    
    //loop para o caso de o usuário digitar um número maior que 30
    do {
        printf("Informe o dia: ");
        scanf("%d",&dia);
    }
    while (dia>30);
    
    
    //loop para o caso de o usuário digitar um número maior que 12 ou menor que 1
    do {
        printf("Informe o mês: ");
        scanf("%d",&mes);
    }
    while (mes>12 || mes<1);
    
    //se mês for igual a 1
    if (mes==1){
        //dias totais recebe o mês vezes a quantidade de dias
        diasTotais = (mes*dia);

    }
    //senao
    else{
        //dias totais recebe o mês menos 1, vezes 30, mais dia. Assim ele não conta 
        //o último mês como 30 dias, somente os dias digitados pelo usuário
        diasTotais = ((mes-1)*30)+dia;
    }
    
    printf("A quantidade de dias é: %d", diasTotais);

    return 0;
}
