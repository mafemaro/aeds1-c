// função double somaUmSobreImpar(int n) que recebe um número inteiro n e retorna o
// valor do somatório dos n primeiros termos da sequência anterior. A sua função somaUmSobreIm-
// par deve utilizar a função umSobreImpar desenvolvida na questão anterior. Além disso, você deve
// fazer um procedimento exercicio04() para ler o valor de n e chamar a função desenvolvida nesta
// questão
#include <stdio.h>

// funcao um sobre impar (reutilizada)
double umSobreImpar(int n) {
    int denominador = 2 * n + 1;
    return 1.0 / denominador;
}

// funcao para somar os n primeiros termos
double somaUmSobreImpar(int n) {
    double soma = 0.0;
    for (int i = 1; i <= n; i++) {
        soma += umSobreImpar(i);  // soma cada termo
    }
    return soma;
}

// procedimento para ler n e mostrar a soma
void exercicio04() {
    int n;
    printf("Exercicio 04: Digite n: ");
    scanf("%d", &n);
    if (n > 0) {
        double resultado = somaUmSobreImpar(n);
        printf("A soma dos %d primeiros termos e: %.6f\n", n, resultado);
    } else {
        printf("n deve ser positivo.\n");
    }
}

int main() {
    exercicio04();
    return 0;
}