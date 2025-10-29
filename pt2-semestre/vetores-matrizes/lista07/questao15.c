// programa que receba do usuário dois vetores, A e B, com 10 números inteiros cada.
// Crie um novo vetor denominado C, calculando C = A − B. Mostre na tela os dados do vetor C
#include<stdio.h>
int main(){
  int vetorA[10], vetorB[10];

  for(int i = 0; i < 10; i++){
    printf("\nDigite o valores do indice [%d] dos vetores A e B: ", i + 1);
    scanf("%d %d", &vetorA[i], &vetorB[i]);
  }
  
  int vetorC[10];
  for(int i = 0; i < 10; i++){
    vetorC[i] = vetorA[i] - vetorB[i];
  }
  
  printf("\nVetor C: Vetor A - Vetor B\n");
  for(int i = 0; i < 10; i++){
    printf("%d\t", vetorC[i]);
  }
}