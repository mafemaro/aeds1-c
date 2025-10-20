// Leia um número inteiro I e um número real R. Enquanto I maior que 10, imprima o valor de I na
// tela, decremente o valor de I em duas unidades e enquanto R menor que 10, imprima os valores
// de R e I na tela e incremente o valor de R em uma unidade.
#include<stdio.h>
int main(){
  int I;
  float R;
  printf("Digite dois valores (um int e outro real): ");
  scanf("%d %f", &I, &R);
  
  // se I for > 10 imprime o valor I na tela e decrementa menos dois 
  while(I > 10){
      printf("\nO valor de I eh: ", I);
      I -= 2;
    }
  // se R for menor que 10, imprima valores de R e I na tela e incremente 1 em R
  while(R < 10){
    printf("O valores de R eh: %.2f e I eh: %d", R, I);
    R++;
  }
}