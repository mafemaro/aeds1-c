#include<stdio.h>
#include <stdio.h>

void lerMatriz(int n, int matriz[n][n]) {
    int valor;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            printf("\nDigite o valor do elemento [%d][%d] da matriz: ", i + 1, j + 1);
            scanf("%d", &valor);
            matriz[i][j] = valor;
        }
    }
}

void imprimirMatriz(int n, int matriz[n][n]) {
    printf("\nMatriz:\n");
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            printf("%d\t", matriz[i][j]);
        }
        printf("\n");
    }
}

int calcularSoma(int n, int matriz[n][n]) {
    int soma = 0;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            soma += matriz[i][j];
        }
    }
    return soma;
}
void buscarValor(int n, int matriz[n][n]) {
    int valorBusca;
    int encontrado = 0;

    printf("\nDigite o valor que deseja buscar na matriz: ");
    scanf("%d", &valorBusca);

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            if(matriz[i][j] == valorBusca) {
              /* se quiser mostrar a posicao do numero encontrado: 
              printf("Valor %d encontrado na linha %d, coluna %d.\n", valorBusca, i + 1, j + 1); */
                encontrado = 1; // verdadeiro
            }
        }
    }

    if(encontrado == 1) {
        printf("Valor %d encontrado na matriz!", valorBusca);
    }else{
      printf("\nValor %d nao encontrado na matriz!", valorBusca);
    }
}

int main() {
    int n, soma;

    printf("\nDigite o tamanho da matriz quadrada?: ");
    scanf("%d", &n);

    int matriz[n][n];

    lerMatriz(n, matriz);
    imprimirMatriz(n, matriz);

    soma = calcularSoma(n, matriz);
    printf("\nSoma dos elementos: %d\n", soma);

    buscarValor(n, matriz);

    return 0;
}


/* int main(){
  int n, valor, soma = 0;
  printf("\nDigite o tamanho da matriz quadrada?: ");
  scanf("%d", &n);

  int matriz[n][n];
  for(int i = 0; i < n; i++){
    for(int j = 0; j < n; j++){
      printf("\nDigite o valor do elemento [%d][%d] da matriz: ", i + 1, j + 1);
      scanf("%d", &valor);
      matriz[i][j] = valor;
      soma += valor;
    }
  }

  printf("\nMatriz:\n");
  for(int i = 0; i < n; i++){
    for(int j = 0; j < n; j++){
      printf("%d\t", matriz[i][j]);
    }
    printf("\n");
  }

  printf("\nSoma dos elementos: %d", soma);
}
*/