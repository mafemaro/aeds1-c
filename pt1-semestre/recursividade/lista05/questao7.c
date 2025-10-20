// método recursivo que conte os dígitos de um determinado número.
#include<stdio.h>
int contarDigitos(int n){
  if (n < 10) return 1;
  else return 1 + contarDigitos (n / 10); // conta 1 digito e divide o numero por 10 ate chegar < 10!
}

int main(){
  int n;
 
  printf("\nDigite um numero para descobrir quantos digitos ele tem: ");
  scanf("%d", &n);

  int resultado = contarDigitos(n);

  printf("\nO numero %d tem %d digitos!", n, resultado);
}