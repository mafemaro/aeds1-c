/*Fazer:
(a) Uma função double parSobreImpar(int n) que recebe um número inteiro n e retorna o n-
ésimo termo da sequência do pdf. A sua função deve utilizar os funções par e
umSobreImpar desenvolvidas anteriormente.
(b) Uma função double somaParSobreImpar(int n) que recebe um número inteiro n e retorna o
valor do somatório dos n primeiros termos da sequência anterior. A sua função somaParSo-
breImpar deve utilizar a função parSobreImpar.
(c) Um procedimento exercicio05() para ler o valor de n e chamar as funções desenvolvidas
nesta questão.*/

#include <stdio.h>

// funcao par: 2n
double par(int n) {
    return 2.0 * n;
}

// funcao um sobre impar (reutilizada)
double umSobreImpar(int n) {
    int denominador = 2 * n + 1;
    return 1.0 / denominador;
}

// 5a: termo par sobre impar = 2n / (2n+1)
double parSobreImpar(int n) {
    return par(n) * umSobreImpar(n);
}

// 5b: soma dos n primeiros
double somaParSobreImpar(int n) {
    double soma = 0.0;
    for (int i = 1; i <= n; i++) {
        soma += parSobreImpar(i);  // acumula cada termo
    }
    return soma;
}

// procedimento para mostrar termo e soma
void exercicio05() {
    int n;
    printf("Exercicio 05: Digite n: ");
    scanf("%d", &n);
    if (n > 0) {
        double termo = parSobreImpar(n);
        double soma = somaParSobreImpar(n);
        printf("O %d-esimo termo e: %.6f\n", n, termo);
        printf("A soma dos %d primeiros termos e: %.6f\n", n, soma);
    } else {
        printf("n deve ser positivo.\n");
    }
}

int main() {
    exercicio05();
    return 0;
}