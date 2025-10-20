// unção que recebe um número inteiro n e retorna o n-ésimo termo da sequência de
// Fibonacci. Além disso, você deve fazer um procedimento exercicioXX() para chamar a função
// desenvolvida nesta questão
#include <stdio.h>

// funcao para n-esimo fibonacci (f1=1, f2=1)
double fibonacc(int n) {
    if (n <= 0) return 0.0;
    if (n == 1 || n == 2) return 1.0;
    double a = 1.0, b = 1.0, c;
    for (int i = 3; i <= n; i++) {
        c = a + b;  // proximo termo
        a = b;
        b = c;
    }
    return b;
}

// procedimento para ler n e mostrar fibonacci
void exercicio13() {
    int n;
    printf("Exercicio 13: Digite n: ");
    scanf("%d", &n);
    if (n > 0) {
        double resultado = fibonacc(n);
        printf("O %d-esimo termo de Fibonacci e: %.0f\n", n, resultado);
    } else {
        printf("n deve ser positivo.\n");
    }
}

int main() {
    exercicio13();
    return 0;
}