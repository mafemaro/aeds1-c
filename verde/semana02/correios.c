#include <stdio.h>

int main() {
    int N, A, L, P;

    scanf("%d", &N);

    if(N < 1 && N > 100){
      printf("\nDigite um numero entre 1 e 100.");
    }else{
      scanf("%d %d %d", &A, &L, &P);

      if(A < 1 && A > 100 || L < 1 && L > 100 || P < 1 && P > 100){
        printf("\nDigite um numero entre 1 e 100.");
      } else {
        int menorDimensao = A;

        if (L < menorDimensao) menorDimensao = L;
        if (P < menorDimensao) menorDimensao = P;
    
        if (N <= menorDimensao) {
          printf("S\n");
        } else {
          printf("N\n");
      }
    }
  }
}
