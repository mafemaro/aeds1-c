#include<stdio.h>

int main(){
    int numero, centena = 0, dezena  = 0, unidade = 0, soma = 0;

    scanf("%d", &numero);

    centena = numero / 100;
    numero = numero % 100; // numero = numero % 100
    dezena =  numero / 10;
    unidade = numero % 10;

    soma = centena + dezena + unidade;

    printf("\n%d", soma);
}
