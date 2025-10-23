// programa que leia 5 valores e, em seguida, mostre todos os valores lidos juntamente
// com o maior, o menor e a média dos valores
#include<stdio.h>
int main(){
  int vetor[5];
  
  for(int i = 0; i < 5; i++){
    printf("\nDigite o valor [%d]: ", i + 1);
    scanf("%d", &vetor[i]);
  }

  int maior = vetor[0], menor = vetor[0];
  int media, total = 0;

  for(int i = 0; i < 5; i++){
    total += vetor[i];
  }
  
  media = total / 5;

  for(int i = 1; i < 5; i++){
    if(vetor[i] > maior) maior = vetor[i];
    if(vetor[i] < menor) menor = vetor[i];
  }

  printf("\nO maior valor do vetor eh: %d\nO menor valor do vetor eh: %d\nA Media dos valores eh: %d", maior, menor, media);
}