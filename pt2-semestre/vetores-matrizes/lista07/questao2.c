// conjunto de números reais, armazenando-o em um vetor, e calcule o quadrado dos
// elementos deste vetor, armazenando o resultado em outro vetor. Os vetores devem conter 10
// elementos cada. Imprima todos os vetores (original e resultante)
#include<stdio.h>
int main(){
  float vetor[10];
  float vetorQuadrado[10];

  for(int i = 0; i < 10; i++){
    printf("\nDigite o valor [%d]: ", i + 1);
    scanf("%f", &vetor[i]);
  }

  for(int i = 0; i < 10; i++){
    vetorQuadrado[i] = vetor[i] * vetor[i];
  }

  printf("\nVetor original:\n");
  for(int i = 0; i < 10; i++){
    printf("%.2f\t",  vetor[i]);
  }

  printf("\nVetor resultante:\n");
  for(int i = 0; i < 10; i++){
    printf("%.2f\t",  vetorQuadrado[i]);
  }
  
}