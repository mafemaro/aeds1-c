// Ler a razão e o primeiro termo de uma PA e mostrar o seu décimo termo

#include<stdio.h>

int main(){
    int termo1, razao, termo10;

    printf("Digite o primeiro termo e a razao da PA: ");
    scanf("%d %d", &termo1, &razao);

    // formula PA an = a1 + (n-1) * r

    termo10 = termo1 + (10 - 1) * razao;

    printf("\nO termo 10 da PA e: %d", termo10);
}
