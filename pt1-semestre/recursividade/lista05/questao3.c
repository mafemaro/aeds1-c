// Fazer um método recursivo que recebe um número inteiro e positivo n e calcula o somatório abaixo.
// n + (n − 1) + ... + 1 + 0
#include<stdio.h>

int somatorio(int n) {
    if (n <= 0) {
        return 0;
    }
    return n + somatorio(n - 1);
}

int main() {
    int n;
    printf("\nDigite o valor de n: ");
    scanf("%d", &n);
    printf("\nSomatório de %d até 0 é %d\n", n, somatorio(n));
    return 0;
}
