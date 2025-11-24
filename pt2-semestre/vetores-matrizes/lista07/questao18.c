#include <stdio.h>

int eh_primo(int n) {
    if (n <= 1) return 0;
    if (n == 2) return 1;
    if (n % 2 == 0) return 0;
    int i;
    for (i = 3; i * i <= n; i += 2) {
        if (n % i == 0) return 0;
    }
    return 1;
}

int main() {
    int v[10];
    int i;
    
    printf("Digite 10 valores inteiros:\n");
    for (i = 0; i < 10; i++) {
        scanf("%d", &v[i]);
    }
    
    printf("Números primos e suas posições:\n");
    for (i = 0; i < 10; i++) {
        if (eh_primo(v[i])) {
            printf("Valor: %d, Posição: %d\n", v[i], i);
        }
    }
    
    return 0;
}