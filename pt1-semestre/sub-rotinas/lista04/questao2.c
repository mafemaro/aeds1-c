// Fazer uma função void mostrarParesEmOrdemDecrescente(int n) que recebe um número inteiro
// n e mostra na tela (em ordem decrescente) todos os valores menores do que n para a sequência do
// exercício anterior. A sua função mostrarParesEmOrdemDecrescente deve utilizar a função par
// desenvolvida na questão anterior. Além disso, você deve fazer um procedimento exercicio02()
// para ler o valor de n e chamar a função desenvolvida nesta questão
#include <stdio.h>
int par(int n) {
    return 2 * n;
}

void mostrarParesEmOrdemDecrescente(int n) {
    if (n <= 2) {
        return;
    }
    int k = (n - 1) / 2;
    
    for (int i = k; i >= 1; i--) {
        printf("%d ", par(i));
    }
}

void exercicio02() {
    int n;
    printf("Digite um numero inteiro n: ");
    scanf("%d", &n);
    mostrarParesEmOrdemDecrescente(n);
    printf("\n");
}

int main() {
    exercicio02();
    return 0;
}
