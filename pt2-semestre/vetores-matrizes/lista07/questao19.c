#include <stdio.h>

int main() {
    int matriz[4][4];
    int i, j, soma = 0;
    
    printf("Digite os elementos da matriz 4x4:\n");
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }
    
    for (i = 0; i < 4; i++) {
        soma += matriz[i][i];
    }
    
    printf("Soma da diagonal principal: %d\n", soma);
    
    return 0;
}