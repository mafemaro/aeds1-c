// Fazer a função que recebe um número inteiro n, um número real x e retorna o n-ésimo termo
// da sequência abaixo. Utilize a função desenvolvida na letra a da questão anterior. Além disso,
// você deve fazer um procedimento exercicio06() para ler os valores de n e de x, e chamar a função
// desenvolvida nesta questão
#include <stdio.h>
#include <math.h>

// funcao par (reutilizada)
double par(int n) {
    return 2.0 * n;
}

// funcao um sobre impar (reutilizada)
double umSobreImpar(int n) {
    int denominador = 2 * n + 1;
    return 1.0 / denominador;
}

// termo com x: 2n * x^n / (2n+1)
double termoComX(int n, double x) {
    return par(n) * pow(x, n) * umSobreImpar(n);
}

// procedimento para ler n e x e mostrar termo
void exercicio06() {
    int n;
    double x;
    printf("Exercicio 06: Digite n: ");
    scanf("%d", &n);
    printf("Digite x: ");
    scanf("%lf", &x);
    if (n > 0) {
        double resultado = termoComX(n, x);
        printf("O %d-esimo termo e: %.6f\n", n, resultado);
    } else {
        printf("n deve ser positivo.\n");
    }
}

int main() {
    exercicio06();
    return 0;
}