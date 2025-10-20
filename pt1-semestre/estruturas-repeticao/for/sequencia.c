#include <stdio.h>

int main()
{
  int n = 0;
  printf("Entre com o num de termos: ");
  scanf("%d", &n);

  int seq = 1; // 1, 5, 12, 16, 23, 27, 34...
  for (int i = 1; i <= n; i += 1)
  {
    printf("%d\t", seq);
    if(i % 2 == 1) seq = seq + 4; // se o índice (posição do termo) for ímpar, soma 4 ao valor atual da sequência
    else seq = seq + 7;           // se o índice for par, soma 7 ao valor atual da sequência
  }
  printf("\n");

  return 0;
}

/* PRINTAR UM VALOR QUE SEJA DIVISIVEL POR 2 E NAO DIVISIVEL POR 3
for (int i = 1; i <= n; i += 1)
  {
    if((seq % 2 == 0 && (seq % 3 != 0))
    printf("%d\t", seq);
    
    if(i % 2 == 1) seq = seq + 4; // se o índice (posição do termo) for ímpar, soma 4 ao valor atual da sequência
    else seq = seq + 7;           // se o índice for par, soma 7 ao valor atual da sequência
  }
  printf("\n");
*/