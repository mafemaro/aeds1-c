#include<stdio.h>
#define TAM 3
int main(){
  int matriz[TAM][TAM];

  for(int i = 0; i < TAM; i++){
    for(int j = 0; j < TAM; j++){
      printf("\nDigite o elemento [%d][%d] da matriz e endereco (%p): ", i, j, &matriz[i][j]);
      scanf("%d", &matriz[i][j]);
    }
  }

  // imprimir matriz normal
  printf("\nMatriz: ");
  for(int i = 0; i < TAM; i++){
    for(int j = 0; j < TAM; j++){
        printf("%d\t", matriz[i][j]);
    }
    printf("\n");
  }

  int soma;
  // pegar os elementos da diagonal principal
  printf("\nDiagonal Principal: ");
  for(int i = 0; i < TAM; i++){
    for(int j = 0; j < TAM; j++){
      if(i == j){
        printf("%d\t", matriz[i][j]);
        soma += matriz[i][j];
      }
    }
    printf("\n");
  }
  /*
    de um jeito mais facil: 
    int soma = 0;
    for(int i = 0; i < TAM; i++){
      soma += matriz[i][i];
    }
  */
  printf("\nA soma da diagonal principal da matriz eh: %d", soma);

  return 0;
}