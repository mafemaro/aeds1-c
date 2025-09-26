// Fazer uma função int par(int n) que recebe um número inteiro n e retorna o n-ésimo termo da
// sequência 2, 4, 6, 8, 10, 12.... Além disso, você deve fazer um procedimento exercicio01() para 
// ler o valor de n e chamar a função desenvolvida nesta questão
#include <stdio.h>

// função que retorna o n-ésimo termo da sequência de números pares: 2, 4, 6, 8, ...
int par(int n) {
    if (n % 2 == 0){
        return 1; // verdadeiro
    }else{
        return 0; // falso
    }
}

// procedimento (função void) que lê o valor de n e chama a função par(n)
// para mostrar o n-ésimo número par
void exercicio01() {
    int n;
    printf("Digite um numero inteiro n: ");
    scanf("%d", &n);
    
    // chama a função e exibe o resultado
    printf("O %d-ésimo numero par eh: %d\n", n, par(n));
}

int main() {
    // chama o procedimento
    exercicio01();
    return 0;
}
