// um método recursivo que calcule o MDC (máximo divisor comum) de dois inteiros positivos m e n
#include<stdio.h>
int MDC(int m, int n){
  if (n == 0) return m;
  else return MDC(n, m % n);  // troca m e n, usa resto da divisão
}
int main(){
  int m, n;
  printf("\nDigite os valores de m e n para saber o MDC deles: ");
  scanf("%d %d", &m, &n);

  if(m <= 0 || n < 0){
    printf("\nDigite um numero positivo e inteiro!");
    return 1;
  }

  int resultado = MDC(m, n);

  printf("\nO Maximo Divisor Comum (MDC) dos numeros %d e %d eh: %d", m, n, resultado);
  return 0;
}