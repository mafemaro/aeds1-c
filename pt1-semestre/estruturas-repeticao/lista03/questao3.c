// imprime todos os elementos da serie fibonacci menores que L
#include <stdio.h>

int main() {
    int L;
    printf("Digite o valor de L: ");
    scanf("%d", &L);

    // inicializando com duas variaveis com os valores int de 0 e 1 (dois primeiros numeros da serie de fibonacci)
    int a = 0, b = 1;

    printf("Elementos da série de Fibonacci menores que %d:\n", L);

    // enquanto o valor de a for menor que L
    while (a < L) {
        printf("%d ", a); // imprime o valor atual de a
        int proximo = a + b; // calcula o proximo numero de a e b somando na variavel proximo
        a = b; // atualiza o valor de a pra b
        b = proximo; // b fica com o valor da variavel proximo
    }

    printf("\n");
    return 0;
}
/*
O programa lê um número L e imprime todos os números da série de Fibonacci que são menores que L. Ele começa com 0 e 1, e vai somando os dois últimos números para gerar o próximo, parando quando o próximo número seria maior ou igual a L.
*/