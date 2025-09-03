// Ler dois valores reais. Calcular e escrever o quociente do primeiro pelo segundo se este for diferente de zero
#include<stdio.h>

int main(){
  float valor1, valor2, quociente;

  printf("Digite o valor 1 e o valor 2: ");
  scanf("%f %f", &valor1, &valor2);

  if(valor2 != 0){
    quociente = valor1 / valor2;
    printf("\nO quociente dos valores digitados eh: %.2f", quociente);
  }else{
    printf("\nDigite um valor diferente de 0 no segundo valor.");
  }
}