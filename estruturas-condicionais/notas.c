// tres  notas de um aluno e calcular media

#include<stdio.h>

int main(){
    float n1, n2, n3, media;

    printf("Digite tres notas: ");
    scanf("%f %f %f", &n1, &n2, &n3);

    media = n1 * n2 * n3 / 3;

    if(media >= 7){
        printf("Aprovado");
    }else if(media < 5){
        printf("Reprovado");
    }else if(media < 5  && media > 6.9){
        printf("Recuperacao");
    }

    /* if(media >= 7)
        aprovado
    else if(media >= 5)
        recuperacao
    else
        reprovado
    */
}
