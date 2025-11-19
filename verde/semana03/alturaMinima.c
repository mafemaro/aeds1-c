#include <stdio.h>

int main() {
  int n, h;
  scanf("%d %d", &n, &h);

  int altura[10];
  int i, contador = 0;

  for (i = 0; i < n; i++) {
    scanf("%d", &altura[i]);
  }

  for (i = 0; i < n; i++) {
    if (h >= altura[i]) contador++;
  }

  printf("%d\n", contador);
  return 0;
}
