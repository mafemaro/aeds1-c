// Ler um número real. Determinar e escrever se ele é maior, menor ou igual a zero
#include<stdio.h>

int main(){
  float numero;
  
  printf("Digite um numero real: ");
  scanf("%f", &numero);

  if(numero < 0){
    printf("\nO numero digitado eh menor que 0");
  }else if(numero > 0){
    printf("\nO numero digitado eh maior que 0");
  }else{
    printf("\nO numero digitado eh igual a 0");
  }
}