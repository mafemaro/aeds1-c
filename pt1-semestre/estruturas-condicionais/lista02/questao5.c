// Ler os coeficientes e os termos independentes de um sistema de equações lineares 2x2. Verificar
// e escrever se ele tem solução única, infinitas soluções ou não tem solução. Usar determinantes.

#include<stdio.h>

int main() {
    float a1, b1, c1, a2, b2, c2;
    float determinante, dx, dy;

    printf("Digite os coeficientes a1, b1 e c1: ");
    scanf("%f %f %f", &a1, &b1, &c1);
    printf("Digite os coeficientes a2, b2 e c2: ");
    scanf("%f %f %f", &a2, &b2, &c2);

    determinante = a1 * b2 - a2 * b1;
    dx = c1 * b2 - c2 * b1;
    dy = a1 * c2 - a2 * c1;

    if (determinante > 0.00001 || determinante < -0.00001) {
        printf("O sistema tem uma solucao unica: x = %.2f, y = %.2f\n");
    } else {
        if ( (dx > 0.00001 || dx < -0.00001) || (dy > 0.00001 || dy < -0.00001) ) {
            printf("O sistema nao tem solucao.\n");
        } else {
            printf("O sistema tem infinitas solucoes.\n");
        }
    }

    return 0;
}
