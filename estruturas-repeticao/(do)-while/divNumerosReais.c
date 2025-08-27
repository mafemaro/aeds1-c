// leia dois numeros reais e realize a divisao entre eles

#include<stdio.h>

int main(){
  float n1, n2, div;

  printf("Digite o primeiro numero: ");
  scanf("%f", &n1);

  do{
    printf("\nDigite o segundo numero: ");
    scanf("%f", &n2);
  }while(num2 == 0)

  div = n1 / n2;

  printf("\nA divisao entre os numeros %.2f e %.2f eh: %.2f", n1, n2, div);
}