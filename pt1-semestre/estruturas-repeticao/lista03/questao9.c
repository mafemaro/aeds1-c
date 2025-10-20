// Faça um programa que mostre na tela os n primeiros elementos da sequência 1, 3, 5, 7, 9,...
#include<stdio.h>
int main(){
  int n;
  printf("Digite a quantidade de termos que voce deseja ver da sequencia: ");
  scanf("%d", &n);

  for(int i = 1; i <= n; i++){
    printf("%d, ", 2 * i - 1);
  }
}