#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int cartela[5][5];
    int i, j, num, usado[100] = {0};
    
    srand(time(NULL));
    
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            do {
                num = rand() % 100;
            } while (usado[num]);
            usado[num] = 1;
            cartela[i][j] = num;
        }
    }
    
    printf("Cartela de Bingo:\n");
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            printf("%d ", cartela[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}