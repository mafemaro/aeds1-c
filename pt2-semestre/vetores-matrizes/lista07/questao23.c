#include <stdio.h>

int main() {
    int matriz[4][4];
    int i, j, maior, linha_maior, coluna_maior;
    
    printf("Digite os elementos da matriz 4x4:\n");
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }
    
    printf("Matriz 4x4:\n");
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
    
    maior = matriz[0][0];
    linha_maior = 0;
    coluna_maior = 0;
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            if (matriz[i][j] > maior) {
                maior = matriz[i][j];
                linha_maior = i;
                coluna_maior = j;
            }
        }
    }
    
    printf("Maior valor: %d, na linha %d, coluna %d\n", maior, linha_maior, coluna_maior);
    
    return 0;
}