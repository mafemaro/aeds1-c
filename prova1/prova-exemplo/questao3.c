// implementar um programa em C para calcular o valor de S pela seguinte serie:
// s = (1 / 2) - (1 / 4) + (1 / 8) - (1 / 16)...
// a) crie uma funcao que receba o valor de N e retorne o valor de S
// b) no main, leia o valor de n e utilize a funcao implementada para calcular e mostrar o resultado

#include<stdio.h>
#include<math.h>

float Serie(int N){
  int base = 2;
  float soma = 0;

  for(int i = 1; i <= N; i++){ 
    if(i % 2 == 0){
      soma -= 1 / pow(2, i);
    } else {
      soma += 1 / pow(2, i);
    }
  }

  return soma;
}

int main(){
  int numero;

  printf("Digite um numero: ");
  scanf("%d", &numero);

  printf("%.2f", Serie(numero));
}