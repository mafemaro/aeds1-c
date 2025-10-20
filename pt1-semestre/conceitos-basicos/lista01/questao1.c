// Ler do teclado um número inteiro com três dígitos (no formato CDU - centena, dezena e unidade)
// e mostrar o número invertido (no formato UDC). O número invertido deve ser armazenado em
// outra variável antes de ser mostrado.

#include<stdio.h>

int main(){
    int num, centena, dezena, unidade;
    scanf("%d", &num);

    centena = num / 100; // transforma em centena
    dezena = (num % 100) / 10; // transforma em dezena
    unidade = num % 10; // transforma em unidade

    printf("%d%d%d", unidade, dezena, centena);
}
