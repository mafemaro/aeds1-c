#include <stdio.h>

int main() {
    int matriz[4][4];
    int i, j, cont = 0;
    
    printf("Digite os elementos da matriz 4x4:\n");
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }
    
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            if (matriz[i][j] > 10) {
                cont++;
            }
        }
    }
    
    printf("Quantidade de valores maiores que 10: %d\n", cont);
    
    return 0;
}