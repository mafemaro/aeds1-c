// função que recebe um número inteiro n, um número real x e retorna o somatório dos
// n primeiros termos da sequência mostrada na questão anterior. Além disso, você deve fazer um
// procedimento exercicioXX() para chamar a função desenvolvida nesta questão
#include <stdio.h>
#include <math.h>

// funcoes auxiliares (reutilizadas do ex9)
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

double termoFatorialComX(int n, double x) {
    int denominador = 2 * n + 1;
    return (par(n) * pow(x, n)) / fatorial(denominador);
}

// soma dos n primeiros termos
double somaTermosFatorialComX(int n, double x) {
    double soma = 0.0;
    for (int i = 1; i <= n; i++) {
        soma += termoFatorialComX(i, x);  // acumula cada termo
    }
    return soma;
}

// procedimento para ler n e x e mostrar soma
void exercicio10() {
    int n;
    double x;
    printf("Exercicio 10: Digite n: ");
    scanf("%d", &n);
    printf("Digite x: ");
    scanf("%lf", &x);
    if (n > 0) {
        double resultado = somaTermosFatorialComX(n, x);
        printf("A soma dos %d primeiros termos e: %.6f\n", n, resultado);
    } else {
        printf("n deve ser positivo.\n");
    }
}

int main() {
    exercicio10();
    return 0;
}