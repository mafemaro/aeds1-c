// programa que preencha um vetor com 10 números reais, calcule e mostre:
// • a quantidade de números negativos;
// • a soma dos números positivos
#include<stdio.h>
int main(){
  float vetor[10];

  for(int i = 0; i < 10; i++){
    printf("\nDigite o numero [%d] do vetor: ", i + 1);
    scanf("%f", &vetor[i]);
  }

  float somaPositivos = 0, negativos = 0;

  for(int i = 0; i < 10; i++){
    if(vetor[i] < 0) negativos++;
    if(vetor[i] > 0) somaPositivos += vetor[i];
  }

  printf("\nA quantidade de numeros negativos: %.2f\nA soma dos numeros positivos: %.2f", negativos, somaPositivos);
}