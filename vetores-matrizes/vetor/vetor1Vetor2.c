// ler 10 numeros inteiros no vetor v
// em seguida criar 2 vetores (v1 e v2)
// copiar os valores impares de v para v1 e os valores pares de v para v2
#include<stdio.h>
int main(){
  int v[10];

  for(int i = 0; i < 10; i++){
    printf("\nDigite o elemento [%d] do vetor: ", i);
    scanf("%d", &v[i]);
  }

  int v1[10], v2[10];

  for(int i = 0; i < 10; i++){
    if(v[i] % 2 == 0){
      v2[i] = v[i];
    }else{
      v1[i] = v[i];
    }
  }

  printf("\nVetor normal: ");
  for(int i = 0; i < 10; i++){
    printf("%d\t", v[i]);
  }

  printf("\nVetor 1: ");
  for(int i = 0; i < 10; i++){
    printf("%d\t", v1[i]);
  }

  printf("\nVetor 2: ");
  for(int i = 0; i < 10; i++){
    printf("%d\t", v2[i]);
  }

}