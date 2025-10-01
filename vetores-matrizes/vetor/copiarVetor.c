#include<stdio.h>
int main(){
  int vetorA[10], vetorB[10];
  int valor;

  // percorrendo o vetor para inserir os valores do indice + copiando vetor
  for(int i = 0; i < 10; i++){
    printf("\nDigite o valor do indice %d do vetor A: ", i + 1);
    scanf("%d", &valor);
    // copiando o vetor
    vetorA[i] = vetorB[i];
  }

  // mostrando na tela vetor A
  printf("\nVetor A:");
  for(int i = 0; i < 10; i++){
    printf("%d\t", vetorA[i]);
  }

  // mostrando na tela vetor B
  printf("\nVetor B:");
  for(int i = 0; i < 10; i++){
    printf("%d\t", vetorB[i]);
  }
}