// calcular a soma dos números de 1 a n usando recursão
#include<stdio.h>
int soma(int n){
  if (n == 1) return 1;
  else return n + soma(n - 1);
}

int main(){
  int n;

  printf("\nInsira o último número do intervalo começando em 1:");
  scanf("%d", &n);

  int resultado = soma(n);

  printf("\nA Soma dos numeros de 1 ate %d eh: %d", n, resultado);
}