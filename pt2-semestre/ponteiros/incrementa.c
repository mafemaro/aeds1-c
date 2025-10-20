#include<stdio.h>
void incrementa(int *x){
  printf("Endereco de x: %p\n", &x);
  *x += 10;
  printf("Dentro da funcao: %d\n", *x);
}

int main(){
  int num;
  printf("\nDigite um numero: ");
  scanf("%d", &num);
  
  printf("Endereco de num: %p\n", &num);
  incrementa(&num);
  printf("Fora da funcao: %d\n", num);
  
  return 0;
}