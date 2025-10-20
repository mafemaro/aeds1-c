// Seja a sequência da questão anterior, mostre somente os elementos maiores que a 
// e menores que b, onde a e b são lidos do teclado
#include<stdio.h>
int main(){
  int a, b, n;
  printf("Digite a quantidade de termos que voce deseja ver da sequencia: ");
  scanf("%d", &n);
  printf("Digite os valores de a e b: ");
  scanf("%d %d", &a, &b);

  for(int i = 1; i <= n; i++){
    int sequencia =  2 * i - 1;
    if(sequencia > a  && sequencia < b){
      printf("%d\t", sequencia);
    }
  }
}