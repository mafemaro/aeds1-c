// programa que lê 6 valores inteiros utilizando um vetor e, em seguida, mostre na tela os valores lidos
#include<stdio.h>7
int main(){
  int vetor[6];

  for(int i = 0; i < 6; i++){
    printf("\nDigite o valor [%d]: ");
    scanf("%d", &vetor[i]);
  }

  for(int i = 0; i < 6; i++){
    printf("[%d]\t", vetor[i]);
  }
}