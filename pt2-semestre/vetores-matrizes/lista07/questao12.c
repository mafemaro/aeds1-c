// vetor de 10 posições e atribua valor 0 para todos os elementos que possuírem valores negativos
#include<stdio.h>
int main(){
  int vetor[10];

  for(int i = 0; i < 10; i++){
    printf("\nDigite o valor do indice [%d]: ", i + 1);
    scanf("%d", &vetor[i]);
  }

  for(int i = 0; i < 10; i++){
    if(vetor[i] < 0) vetor[i] = 0;
  }

  for(int i = 0; i < 10; i++){
    printf("%d\t", vetor[i]);
  }
}