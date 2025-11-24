#include <stdio.h>

int main() {
    int v1[10], v2[10], resultado[10];
    int i;
    
    printf("Digite 10 valores para o primeiro vetor:\n");
    for (i = 0; i < 10; i++) {
        scanf("%d", &v1[i]);
    }
    
    printf("Digite 10 valores para o segundo vetor:\n");
    for (i = 0; i < 10; i++) {
        scanf("%d", &v2[i]);
    }
    
    for (i = 0; i < 10; i++) {
        if (i % 2 == 0) {
            resultado[i] = v1[i];
        } else {
            resultado[i] = v2[i];
        }
    }
    
    printf("Vetor resultado:\n");
    for (i = 0; i < 10; i++) {
        printf("%d ", resultado[i]);
    }
    printf("\n");
    
    return 0;
}