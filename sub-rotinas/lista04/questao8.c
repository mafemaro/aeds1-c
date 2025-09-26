// Fazer uma função que recebe um número inteiro n e retorna o seu fatorial1. Além disso, você
// deve fazer um procedimento exercicio08() para ler o valor de n e chamar a função desenvolvida
// nesta questão.
#include <stdio.h>

// funcao fatorial em double
double fatorial(int n) {
    if (n < 0) return 0.0;
    double fat = 1.0;
    for (int i = 1; i <= n; i++) {
        fat *= i;  // multiplica de 1 ate n
    }
    return fat;
}

// procedimento para ler n e mostrar fatorial
void exercicio08() {
    int n;
    printf("Exercicio 08: Digite n: ");
    scanf("%d", &n);
    if (n >= 0) {
        double resultado = fatorial(n);
        printf("Fatorial de %d e: %.0f\n", n, resultado);
    } else {
        printf("n deve ser nao-negativo.\n");
    }
}

int main() {
    exercicio08();
    return 0;
}