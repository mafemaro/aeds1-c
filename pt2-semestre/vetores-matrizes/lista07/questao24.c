#include <stdio.h>

int main() {
    int matriz[5][5];
    int i, j, x, encontrado = 0, linha, coluna;
    
    printf("Digite os elementos da matriz 5x5:\n");
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }
    
    printf("Digite o valor X a buscar:\n");
    scanf("%d", &x);
    
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            if (matriz[i][j] == x) {
                encontrado = 1;
                linha = i;
                coluna = j;
                break;
            }
        }
        if (encontrado) break;
    }
    
    if (encontrado) {
        printf("Valor encontrado na linha %d, coluna %d\n", linha, coluna);
    } else {
        printf("Não encontrado\n");
    }
    
    return 0;
}