// ler o valor de cada compra, para a leitura se o valor digitado for 0 e mostrar o valor total arrecadado ao final do dia

#include<stdio.h>

int main(){
  float valor, total = 0;

  /* usando while
  printf("Entre o valor da compra: ");
  scanf("%f", &valor);

  
  while(valor != 0){
    total += valor;
    printf("\nDigite o valor da compra: ");
    scanf("%f", &valor);
  }
  */

  // usando do while (mais avançado)
  do{
    printf("\nDigite o valor da compra: ");
    scanf("%f", &valor);
    total += valor;
  } while(valor != 0)

  printf("\nO valor total arrecadado ao final do dia eh: %.2f", total);
}