// Ler do teclado um n�mero inteiro com tr�s d�gitos (no formato CDU - centena, dezena e unidade)
// e mostrar o n�mero invertido (no formato UDC). O n�mero invertido deve ser armazenado em
// outra vari�vel antes de ser mostrado.

#include<stdio.h>

int main(){
    int num, centena, dezena, unidade;
    scanf("%d", &num);

    centena = num / 100; // transforma em centena
    dezena = (num % 100) / 10; // transforma em dezena
    unidade = num % 10; // transforma em unidade

    printf("%d%d%d", unidade, dezena, centena);
}
