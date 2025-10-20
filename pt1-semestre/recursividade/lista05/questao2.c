// método recursivo que recebe um número inteiro n e retorna o n-ésimo termo da equação de recorrência abaixo:
// T (1) = 2
// T (2) = 3
// T (n) = 5 ∗ n + T (n − 1)^n
#include <stdio.h>
#include <math.h>  // função pow

float T(int n) {
    if (n == 1) {
        return 2;
    } else if (n == 2) {
        return 3;
    } else {
        return 5 * n + pow(T(n - 1), n);
    }
}

int main() {
    int n;
    printf("\nDigite o valor de n: ");
    scanf("%d", &n);

    if (n < 1) {
        printf("n deve ser maior ou igual a 1.\n");
        return 1;
    }

    float resultado = T(n);
    printf("T(%d) = %f\n", n, resultado);

    return 0;
}
