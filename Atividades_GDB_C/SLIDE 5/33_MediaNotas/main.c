/*- Programa que lê 3 notas de um aluno, faz a média e diz se ele foi aprovado,
reprovado ou precisa fazer a prova final.

        Ana Luisa Reis - 01/05/2026*/

#include <stdio.h>

int main()
{
    //variáveis
    float nota1, nota2, nota3, media;
    
    printf("Digite nota 1: ");
    scanf("%f",&nota1);
    printf("Digite nota 2: ");
    scanf("%f",&nota2);
    printf("Digite nota 3: ");
    scanf("%f",&nota3);
    
    //cálculo da média das notas
    media = (nota1+nota2+nota3)/3;
    
    //condição de aprovação,reprovação ou prova final
    if(media>6){
        printf("Aprovado!");
    }
    else if (media>4 && media<=5.9){
        printf("Prova final!");
    }
    else if(media<3.9){
        printf("Reprovado!");
    }
    return 0;
}
