// programa que leia 6 valores inteiros e, em seguida, mostre na tela os valores lidos na ordem inversa
#include<stdio.h>
int main(){
  int vetor[6];

  for(int i = 0; i < 6; i++){
    printf("\nDigite o valor do indice [%d] do vetor: ", i + 1);
    scanf("%d", &vetor[i]);
  }

  printf("\n");

  for(int i = 5; i >= 0; i--){ // lembrar aqui que tem que pegar o ultimo indice  do vetor que eh n - 1 (tinha esquecido entao davaum resultado diferente do esperado)
    printf("%d\t", vetor[i]);
  }
}