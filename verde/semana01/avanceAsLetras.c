#include <stdio.h>
#include <string.h>

int main() {
    int T, a, b, diferenca;
    scanf("%d", &T);

    char A[10001], B[10001]; // LEMBRAR: guarda inclusive o '\0'

    for(int i = 0; i < T; i++){
        scanf("%s %s", A, B);

        int n = strlen(A);
        int transformacao = 0;

        for (int i = 0; i < n; i++) {
            a = A[i] - 'a';
            b = B[i] - 'a';
            diferenca = (b - a + 26) % 26;
            transformacao += diferenca;
        }

        printf("%d\n", transformacao);
    }
}