#include<stdio.h>

int main(){
    int golMandante, golVisitante;

    printf("Gols do mandante: ");
    scanf("%d", &golMandante);

    printf("Gols do visitante: ");
    scanf("%d", &golVisitante);

    if(golMandante > golVisitante){
        printf("O vencedor e o mandante!");
    }else if(golVisitante > golMandante){
        printf("O vencedor e o visitante!");
    }else{
        printf("Empate!");
    }
}
