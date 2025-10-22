// leia um vetor de 10 posições. Conte e escreva quantos valores pares ele possui
#include<stdio.h>
int main(){
  int vetor[10];

  for(int i = 0; i < 10; i++){
    printf("\nDigite o valor do indice [%d]: ", i+1);
    scanf("%d", &vetor[i]);
  }

  int par = 0;
  for(int i = 0; i < 10; i++){
    if(vetor[i] % 2 == 0){
      par++;
    }
  }

  printf("\nO vetor possui %d valores pares!", par);
}