// função double umSobreImpar(int n) que recebe um número inteiro n e retorna o n-ésimo
// termo da sequência do pdf. Além disso, você deve fazer um procedimento exercicio03()
// para ler o valor de n e chamar a função desenvolvida nesta questão
#include <stdio.h>

// funcao para o n-esimo termo 1/(2n+1)
double umSobreImpar(int n) {
    int denominador = 2 * n + 1;
    return 1.0 / denominador;
}

// procedimento para ler n e mostrar o termo
void exercicio03() {
    int n;
    printf("Exercicio 03: Digite n: ");
    scanf("%d", &n);
    if (n > 0) {
        double resultado = umSobreImpar(n);
        printf("O %d-esimo termo e: %.6f\n", n, resultado);
    } else {
        printf("n deve ser positivo.\n");
    }
}

int main() {
    exercicio03();
    return 0;
}