#include <stdio.h>
#include <stdlib.h>

int main() {
  int tamanho, qtdPistas;
  scanf("%d %d", &tamanho, &qtdPistas);

  int pistaX[101], pistaY[101], dist[101];

  for (int i = 0; i < qtdPistas; i++) {
    scanf("%d %d %d", &pistaX[i], &pistaY[i], &dist[i]);
  }

  int x = -1, y = -1;
  int achados = 0;

  for (int linha = 0; linha < tamanho; linha++) {
    for (int coluna = 0; coluna < tamanho; coluna++) {
      int valido = 1;
      
      for (int i = 0; i < qtdPistas; i++) {
        int d = abs(linha - pistaX[i]) + abs(coluna - pistaY[i]);
        if (d != dist[i]) {
          valido = 0;
          break;
        }
      }

      if (valido) {
        x = linha;
        y = coluna;
        achados++;
      }
    }
  }

  if (achados == 1) {
    printf("%d %d\n", x, y);
  } else {
    printf("-1 -1\n");
  }

  return 0;
}
