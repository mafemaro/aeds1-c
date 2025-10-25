// programa em C para somar dois números usando ponteiros
#include<stdio.h>
int main(){
  int n1, n2;

  printf("\nDigite os valores de n1 e n2: ");
  scanf("%d %d", &n1, &n2);

  int *p1 = &n1;
  int *p2 = &n2;

  int soma = *p1 + *p2;

  // se eu quisesse criar um ponteiro para soma:
  // int *pSoma = &soma;

  printf("\nA soma dos dois numeros usando ponteiros eh: %d", soma);
}