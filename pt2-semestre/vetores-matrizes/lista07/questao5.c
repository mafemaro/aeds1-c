// vetor com 10 posições. Em seguida, o programa deverá imprimir o maior e o menor elemento do vetor
#include<stdio.h>
int main(){
  int vetor[10];
  int maior, menor;

  maior = menor = vetor[0];

  for (int i = 0; i < 10; i++) {
    printf("Digite o elemento do indice [%d] do vetor: ", i + 1);
    scanf("%d", &vetor[i]);
  }

  for (int i = 0; i < 10; i++) {
    printf("%d ", vetor[i]);
  }

  for (int i = 0; i < 10; i++) {
    if(vetor[i] > maior){
      maior = vetor[i];
    }
    if (vetor[i] < menor){
      menor = vetor[i];
    }
  }

  printf("\nO maior elemento do vetor eh: %d\nO menor elemento do vetor eh: %d", maior, menor);
}