// função que recebe um número inteiro n e retorna o maior elemento da sequência de
// Fibonacci que seja menor que n. Além disso, você deve fazer um procedimento exercicioXX()
// para chamar a função desenvolvida nesta questão.
#include <stdio.h>

// funcao para maior fib menor que n
double maiorFibMenorQue(int n) {
    if (n <= 1) return 0.0;
    double a = 1.0, b = 1.0, c;
    while (b < n) {
        c = a + b;  // gera proximo fib
        if (c >= n) {
            return b;  // b e o maior menor que n
        }
        a = b;
        b = c;
    }
    return b;
}

// procedimento para ler n e mostrar maior fib
void exercicio14() {
    int n;
    printf("Exercicio 14: Digite n: ");
    scanf("%d", &n);
    if (n > 1) {
        double resultado = maiorFibMenorQue(n);
        printf("O maior Fibonacci menor que %d e: %.0f\n", n, resultado);
    } else {
        printf("n deve ser maior que 1.\n");
    }
}

int main() {
    exercicio14();
    return 0;
}