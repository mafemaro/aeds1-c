// Fazer um programa para ler dois números inteiros e calcular e imprimir a diferença desses números.
// Depois, se o segundo número for diferente de zero, fazer a divisão do primeiro pelo segundo.

#include <stdio.h>

int main()
{
    int n1, n2, diferenca, div;

    scanf("%d %d", &n1, &n2);

    diferenca = n1 - n2;

    printf("\nDiferenca: %d", diferenca);

    if (n2 != 0)
    {
        div = n1 / n2;
    }

    printf("\nDivisao: %d", div);
}
