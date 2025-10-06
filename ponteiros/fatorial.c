#include <stdio.h>

// Função recursiva que calcula o fatorial de n
int fatorial(int n) {
    if (n == 0) return 1;       // caso base: 0! = 1
    return n * fatorial(n - 1);
}

int fatorial_inplace(int *n) { // acessa e pode modificar o valor original da variável
    if (*n < 0) {              // se o valor apontado por n for negativo
        return -1;             // erro: fatorial não definido para negativos
    }
    *n = fatorial(*n);         // substitui o valor original pelo fatorial
    return 0;                  // sucesso
}

int main() {
    int x;
    printf("\nDigite o valor de x: ");
    scanf("%d", &x);

    int status = fatorial_inplace(&x);
    if (status == 0) {
        printf("Fatorial: %d\n", x);
    } else {
        printf("Erro: número negativo\n");
    }
    return 0;
}
