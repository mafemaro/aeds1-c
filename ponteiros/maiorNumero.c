// programa que encontra o maior numero entre dois numeros usando ponteiro

#include <stdio.h>

// função que encontra o maior número entre dois usando ponteiros
// ela recebe ponteiros para os dois números e um ponteiro para o resultado
void encontrarMaior(int *a, int *b, int *maior) {
    if (*a > *b) {
        *maior = *a;
    } else {
        *maior = *b;
    }
}

int main() {
    int num1, num2, resultado;
    
    // Leitura dos dois números
    printf("Digite o primeiro numero: ");
    scanf("%d", &num1);
    printf("Digite o segundo numero: ");
    scanf("%d", &num2);
    
    // chamada da função usando ponteiros
    encontrarMaior(&num1, &num2, &resultado);
    
    // exibição do resultado
    printf("O maior numero e: %d\n", resultado);
    
    return 0;
}
