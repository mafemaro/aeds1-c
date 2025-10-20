// método recursivo que multiplique dois números naturais, através de somas sucessivas
#include<stdio.h>
int Multiplica(int n1, int n2){
  if (n2 == 0) return 0;
  else return n1 + Multiplica(n1, n2 - 1);
}

int main(){
  int n1, n2;
  printf("\nDigite o n1 e o n2:");
  scanf("%d %d", &n1, &n2);

  int resultado = Multiplica(n1, n2);

  printf("\nO resultado da multiplicacao por somas sucessivas eh: %d", resultado);
}