#include<stdio.h>
int main(){
  int vetor[4]; // a regiao inteira desse vetor eh 40 bytes
  
  for(int i = 0; i < 4; i++){
    printf("Digite o %d numero: ", i + 1);
    scanf("%d", &vetor[i]); // alterando o conteudo do indice i do vetor
    printf("\n");
  }

  for(int i = 0; i < 4; i++){
    printf("%d\t", vetor[i]);
  }

  for(int i = 0; i < 4; i++){ // endereco de memoria 
    printf("%p\t", &vetor[i]);
  }
}