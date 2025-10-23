// programa que leia 10 números inteiros e os armazene em um vetor. Imprima o vetor,
// o maior elemento e a posição em que ele se encontra
#include<stdio.h>
int main(){
  int vetor[10];
  
  for(int i = 0; i < 10; i++){
    printf("\nDigite o numero [%d] do vetor: ", i + 1);
    scanf("%d", &vetor[i]);
  }

  int menor = vetor[0];
  int maior = vetor[0];

  for(int i = 1; i < 10; i++){
    if(vetor[i] < menor){
      menor = vetor[i]; 
    }
    if(vetor[i] > maior){
      maior = vetor[i];
    }
  }

  printf("\nO maior elemento: %d\nO menor elemento: %d", maior, menor);
}