// Ler o numerador e o denominador de uma fra��o e transform�-la em um n�mero decimal

#include <stdio.h>

int main() {
    int numerador, denominador;
    float resultado;

    printf("Digite o numerador e o denominador: ");
    scanf("%d %d", &numerador, &denominador);

    resultado = numerador * 1.0 / denominador;

    printf("\nO resultado da fracao %d/%d em decimal e: %.2f\n", numerador, denominador, resultado);

    return 0;
}

