// programa que leia números inteiros no intervalo [0, 50] e os armazene em um vetor
// com 10 posições. Preencha um segundo vetor apenas com os números ímpares do primeiro vetor.
// imprima os dois vetores, exibindo 2 elementos por linha.
#include <stdio.h>
#define LINHA 2

int main() {
    int vetor[10];
    int valor;

    for (int i = 0; i < 10; i++) {
        do {
            printf("\nDigite o valor do indice [%d] do vetor: ", i + 1);
            scanf("%d", &valor);
            if (valor < 0 || valor > 50) {
                printf("Valor invalido! Digite um numero entre 0 e 50.\n");
            }
        } while (valor < 0 || valor > 50);
        vetor[i] = valor;
    }

    int countImpares = 0;

    for (int i = 0; i < 10; i++) {
        if (vetor[i] % 2 != 0) countImpares++;
    }

    int impares[10];
    int indiceImpares = 0;

    for (int i = 0; i < 10; i++) {
        if (vetor[i] % 2 != 0) {
            impares[indiceImpares] = vetor[i];
            indiceImpares++;
        }
    }

    printf("\nVetor normal:\n");
    for (int i = 0; i < 10; i++) {
        printf("%d\t", vetor[i]);
        if ((i + 1) % LINHA == 0) printf("\n");
    }

    printf("\nVetor de impares:\n");
    for (int i = 0; i < countImpares; i++) {
        printf("%d\t", impares[i]);
        if ((i + 1) % LINHA == 0) printf("\n");
    }

    if (countImpares % LINHA != 0) {
        printf("\n");
    }

    return 0;
}
