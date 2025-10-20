// Refazer a função da questão anterior, omitindo todos os termos cujos valores no denominador
// sejam múltiplos de 2. Além disso, você deve fazer um procedimento exercicioXX() para chamar
// a função desenvolvida nesta questão
#include <stdio.h>
#include <math.h>

// funcoes auxiliares (reutilizadas do ex10)
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

// soma omitindo denominadores multiplos de 2 (assumindo base 2n+1 im par, inclui todos)
double somaTermosFatorialSemMultiplos2(int n, double x) {
    double soma = 0.0;
    for (int i = 1; i <= n; i++) {
        int base = 2 * i + 1;  // base do denominador (sempre im par)
        if (base % 2 != 0) {   // condicao para incluir (sempre verdadeira)
            soma += termoFatorialComX(i, x);
        }
    }
    return soma;
}

// procedimento para ler n e x e mostrar soma filtrada
void exercicio11() {
    int n;
    double x;
    printf("Exercicio 11: Digite n: ");
    scanf("%d", &n);
    printf("Digite x: ");
    scanf("%lf", &x);
    if (n > 0) {
        double resultado = somaTermosFatorialSemMultiplos2(n, x);
        printf("A soma omitindo denominadores multiplos de 2 e: %.6f\n", resultado);
    } else {
        printf("n deve ser positivo.\n");
    }
}

int main() {
    exercicio11();
    return 0;
}