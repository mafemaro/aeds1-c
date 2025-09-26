// função que recebe um número inteiro n e imprima os n primeiros múltiplos de 5. Além
// disso, você deve fazer um procedimento exercicioXX() para chamar a função desenvolvida nesta
// questão
#include <stdio.h>

// funcao para imprimir n multiplos de 5
void imprimirMultiplos5(int n) {
    if (n <= 0) {
        printf("n deve ser positivo.\n");
        return;
    }
    printf("Os %d primeiros multiplos de 5 sao:\n", n);
    for (int i = 1; i <= n; i++) {
        printf("%d ", 5 * i);  // calcula e imprime cada multiplo
    }
    printf("\n");
}

// procedimento para ler n e chamar impressao
void exercicio12() {
    int n;
    printf("Exercicio 12: Digite n: ");
    scanf("%d", &n);
    imprimirMultiplos5(n);
}

int main() {
    exercicio12();
    return 0;
}