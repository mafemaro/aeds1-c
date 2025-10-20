// Fazer um método recursivo que imprima de um número natural em base binária
#include <stdio.h>
void baseBinaria(int n) {
    if (n > 0) {  // Para n == 0, não faz nada (ou imprima "0" no main se necessário)
        baseBinaria(n / 2);  // chama recursivamente para n/2 (antes do printf)
    }
    printf("%d", n % 2);  // imprime o bit menos significativo atual (sempre executa)
}
int main() {
    int n;
    printf("\nDigite o numero: ");
    scanf("%d", &n);
    if (n < 0) {
        printf("\nDigite um numero valido (natural, >= 0)\n");
    } else {
        if (n == 0) {
            printf("0");  // caso especial para zero
        } else {
            baseBinaria(n);
        }
        printf("\n");
    }
    return 0;
}