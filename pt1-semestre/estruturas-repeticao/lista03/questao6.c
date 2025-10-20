// imprimir o N termos da sequencia fibonacci
#include<stdio.h>
int main(){
  int N, t1 = 0, t2 = 1, proximo;

  printf("\nDigite quantos termos deseja imprimir da sequencia Fibonacci: ");
  scanf("%d", &N);

  for(int i = 0; i < N; i++){
    printf("%d\t", t1);
    
    proximo = t1 + t2;
    t1 = t2;
    t2 = proximo;
  }
}