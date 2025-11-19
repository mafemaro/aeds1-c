#include <stdio.h>

int main() {
  int k, n;
  scanf("%d %d", &k, &n);
    
  char alfabeto[100]; 
  char mensagem[100];
  int i, j, achou, valido = 1;

  scanf("%s", alfabeto);
  scanf("%s", mensagem);

  for (i = 0; i < n; i++) {
    achou = 0;
    for (j = 0; j < k; j++) {
      if (mensagem[i] == alfabeto[j]) {
      achou = 1;
      break;
      }
    }
    if (achou == 0) {
      valido = 0;
      break;
    }
  }

  if (valido == 1) printf("S\n");
  else printf("N\n");

  return 0;
}
