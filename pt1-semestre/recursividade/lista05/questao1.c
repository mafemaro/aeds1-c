//método recursivo que recebe um número inteiro e retorna o seu fatorial.
#include<stdio.h>

int fat(int n){
  if (n == 1) return 1;
  else return n * fat(n - 1);

}
int main(){
  int n;
  printf("\nDigite o valor de um numero para saber o fatorial dele: ");
  scanf("%d", &n);

  if (n < 1) {
    printf("n deve ser maior ou igual a 1.\n");
    return 1;
  }

  printf("\nO fatorial do numero %d eh: %d", n, fat(n));

  return 0;
}