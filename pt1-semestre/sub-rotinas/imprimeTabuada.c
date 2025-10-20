// funcao que imprime uma tabuada - separar em pedaços um programa, e cada pedaço tem um objetivo
#include<stdio.h>

void imprime_tabuada(int num){
  printf("Tabuada do numero %d:\n", num);
  for(int i = 1; i <= 10; i++){
    printf("%d x %d = %d\n", num, i, num*i);
  }
}

int main(){
  int num;
  printf("Entre com um numero: ");
  scanf("%d", &num);

  while(num > 0){
    imprime_tabuada(num);
      printf("\nEntre com um numero: ");
      scanf("%d", &num);
  }
}