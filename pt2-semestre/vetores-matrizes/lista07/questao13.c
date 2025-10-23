// vetor de 10 números inteiros. Em seguida, leia um número inteiro
// x. Conte e mostre na tela todos os elementos do vetor que são múltiplos de x
#include<stdio.h>
int main(){
  int vetor[10];

  for(int i = 0; i < 10; i++){
    printf("\nDigite o valor do indice [%d]: ", i + 1);
    scanf("%d", &vetor[i]); 
  }

  int x;
  printf("\nDigite o numero x: ");
  scanf("%d", &x);

  for(int i = 0; i < 10; i++){
    if(vetor[i] % x == 0){
      printf("%d\t", vetor[i]);   
    }
  }
}