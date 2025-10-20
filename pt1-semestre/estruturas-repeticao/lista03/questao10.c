// programa que mostre na tela os n primeiros elementos da sequência anterior que forem
// divisíveis por três AND múltiplos de cinco OR divisíveis por sete
#include<stdio.h>
int main(){
  int n;
  printf("Digite a quantidade de termos que voce deseja ver da sequencia: ");
  scanf("%d", &n);

  printf("\n");
  for(int i = 1; i <= n; i++){
    int sequencia =  2 * i - 1;
    if(sequencia % 3 == 0 && sequencia % 5 == 0 || sequencia % 7 == 0){
      printf("%d\t", sequencia);
    }
  }
}