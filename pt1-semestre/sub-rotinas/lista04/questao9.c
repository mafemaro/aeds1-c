// função que recebe um número inteiro n, um número real x e retorna o n-ésimo termo
// da sequência abaixo. Utilize as funções desenvolvidas anteriormente. Além disso, você deve
// fazer um procedimento exercicio09() para ler o valor de n e chamar a função desenvolvida nesta
// questão.
#include <stdio.h>
#include <math.h>

// funcoes auxiliares (reutilizadas)
double par(int n) {
    return 2.0 * n;
}

double fatorial(int n) {
    if (n < 0) return 0.0;
    double fat = 1.0;
    for (int i = 1; i <= n; i++) {
        fat *= i;
    }
    return fat;
}

// termo com fatorial: 2n * x^n / (2n+1)!
double termoFatorialComX(int n, double x) {
    int denominador = 2 * n + 1;
    return (par(n) * pow(x, n)) / fatorial(denominador);
}

// procedimento para ler n e x e mostrar termo
void exercicio09() {
    int n;
    double x;
    printf("Exercicio 09: Digite n: ");
    scanf("%d", &n);
    printf("Digite x: ");
    scanf("%lf", &x);
    if (n > 0) {
        double resultado = termoFatorialComX(n, x);
        printf("O %d-esimo termo e: %.6f\n", n, resultado);
    } else {
        printf("n deve ser positivo.\n");
    }
}

int main() {
    exercicio09();
    return 0;
}