#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int matriz[4][4], triangular[4][4];
    int i, j;
    
    srand(time(NULL));
    
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            matriz[i][j] = rand() % 20 + 1;
            triangular[i][j] = matriz[i][j];
        }
    }
    
    for (i = 0; i < 4; i++) {
        for (j = i + 1; j < 4; j++) {
            triangular[i][j] = 0;
        }
    }
    
    printf("Matriz original:\n");
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
    
    printf("Matriz triangular inferior:\n");
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            printf("%d ", triangular[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}