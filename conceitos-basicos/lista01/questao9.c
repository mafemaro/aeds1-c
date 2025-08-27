// Ler a razão e o primeiro termo de uma PG e mostrar o seu quinto termo

#include<stdio.h>
#include<math.h>

int main(){
    int razao, termo1, termo5;

    printf("Digite o primeiro termo e a razão: ");
    scanf("%d %d", &termo1, &razao);

    // formula PG an = a1 * q^(n-1)

    termo5 = termo1 * pow(razao, 4);

    printf("O termo 5 da PG e: %d", termo5);
}
