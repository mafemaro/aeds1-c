// função que recebe um número inteiro n, um real x e retorna o produto dos n primeiros
// termos da sequência acima. Utilize a função desenvolvida na questão anterior. Além disso, você
// deve fazer um procedimento exercicio07() para ler os valores de n e de x, e chamar a função
// desenvolvida nesta questão.
#include <stdio.h>
#include <math.h>

// funcoes auxiliares (reutilizadas do ex6)
double par(int n) {
    return 2.0 * n;
}

double umSobreImpar(int n) {
    int denominador = 2 * n + 1;
    return 1.0 / denominador;
}

double termoComX(int n, double x) {
    return par(n) * pow(x, n) * umSobreImpar(n);
}

// produto dos n primeiros termos
double produtoTermosComX(int n, double x) {
    double produto = 1.0;
    for (int i = 1; i <= n; i++) {
        produto *= termoComX(i, x);  // multiplica cada termo
    }
    return produto;
}

// procedimento para ler n e x e mostrar produto
void exercicio07() {
    int n;
    double x;
    printf("Exercicio 07: Digite n: ");
    scanf("%d", &n);
    printf("Digite x: ");
    scanf("%lf", &x);
    if (n > 0) {
        double resultado = produtoTermosComX(n, x);
        printf("O produto dos %d primeiros termos e: %.6f\n", n, resultado);
    } else {
        printf("n deve ser positivo.\n");
    }
}

int main() {
    exercicio07();
    return 0;
}
