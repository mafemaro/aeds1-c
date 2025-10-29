#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);
    
    float soma = 0;
    for (float i = 1; i <= N; i++) {
      soma += (2.0 * i - 1.0) / i;
    }
    
    printf("%.2f\n", soma);
}