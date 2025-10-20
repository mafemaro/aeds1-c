// pg
#include <stdio.h>

int main() {
    int a1, q, n;
    int an, pot;
    int i, j;

    printf("Digite o primeiro termo inteiro (a1): ");
    scanf("%d", &a1);

    printf("Digite a razão inteira (q): ");
    scanf("%d", &q);

    printf("Digite o termo n que deseja calcular: ");
    scanf("%d", &n);

    // Calcula q^(n-1) usando somas repetidas para multiplicação
    pot = 1; // pot = q^(0) = 1

    for (i = 0; i < n - 1; i++) {
        int temp = 0;
        // Multiplica pot * q usando soma repetida
        for (j = 0; j < q; j++) {
            temp += pot;
        }
        pot = temp;
    }

    // Calcula an = a1 * pot usando soma repetida
    an = 0;
    for (i = 0; i < a1; i++) {
        an += pot;
    }

    printf("O %d-ésimo termo da PG é: %d\n", n, an);

    return 0;
}
