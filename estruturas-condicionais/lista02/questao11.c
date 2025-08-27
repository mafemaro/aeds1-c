// Ler dois valores reais, determinar e escrever o menor e o maior.

#include<stdio.h>

int main(){
  float valor1, valor2;

  printf("Digite o valor 1 e o valor 2: ");
  scanf("%f %f", &valor1, &valor2);

  if(valor1 > valor2){
    printf("\nO maior valor eh: %.2f", valor1);
    printf("\nO menor valor eh: %.2f", valor2);
  }else if(valor2 > valor1){
    printf("\nO maior valor eh: %.2f", valor2);
    printf("\nO menor valor eh: %.2f", valor1);
  }else{
    printf("\nOs dois valores digitados sao iguais!");
  }
}