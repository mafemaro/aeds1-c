#include <stdio.h>

int main(){
  int C,A;
  scanf("%d",&C);
  scanf("%d",&A);

  int capacidade = C-1;
  int viagens = A/capacidade;
  if(A%capacidade!=0) viagens++;

  printf("%d\n",viagens);
  return 0;
}
