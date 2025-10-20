// Faça um programa que imprima todos os elementos da série de Fibonacci menores que L.
#include<stdio.h>

int main(){
  int L, t1, t2, termoN;

    // imprime o primeiro termo (se n for 1 ou maior)
    if (L >= 1) {
        printf("%d ", t1);
    }
    // imprime o segundo termo (se n for 2 ou maior)
    if (L >= 2) {
        printf("%d ", t2);
    }

    // gera e imprime os termos restantes
    for (int i = 3; i <= L; i++) {
        termoN = t1 + t2;
        printf("%d", termoN);
        t1 = t2;
        t2 = termoN;
    }
}