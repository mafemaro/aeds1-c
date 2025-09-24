#include<stdio.h>
int soma(int *a, int *b){
  int resultado = *a + *b;
  return resultado;
}

int main(){
  int num1, num2;
  printf("\nDigite dois numeros inteiros: ");
  scanf("%d %d", &num1, &num2);

  int resultado = soma(&num1, &num2);
  printf("\nA soma de %d e %d eh: %d", num1, num2, soma);

  return 0;
}