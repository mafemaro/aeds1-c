// Ler os coeficientes de uma equação do primeiro grau (ax + b = 0), calcular e escrever a raiz da equação

#include <stdio.h>

int main() {
    float a, b, x;

    printf("Digite o coeficiente a: ");
    scanf("%f", &a);
    printf("Digite o coeficiente b: ");
    scanf("%f", &b);

    if (a != 0) {
        x = -b / a;
        printf("A raiz da equacao e: %.2f\n", x);
    } else {
        if (b == 0) {
            printf("A equacao tem infinitas solucoes.\n");
        } else {
            printf("A equacao nao tem solucao.\n");
        }
    }

    return 0;
}
