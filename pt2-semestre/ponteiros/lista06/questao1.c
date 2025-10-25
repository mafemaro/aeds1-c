// programa que declare um inteiro, um real e um char, e ponteiros para inteiro, real,
// e char. Associe as variáveis aos ponteiros (use &). Modifique os valores de cada variável usando
// os ponteiros. Imprima os valores das variáveis antes e após a modificação
#include<stdio.h>
int main(){
  int inteiro;
  float real;
  char caractere;
  
  printf("\nDigite um numero inteiro, um real e um caractere: ");
  scanf("%d %f %c", &inteiro, &real, &caractere);

  int *pInteiro = &inteiro;
  float *pReal = &real;
  char *pCaractere = &caractere;
  
  printf("\nValor do inteiro antes: %d\nValor do inteiro depois: %d", inteiro, *pInteiro);
  printf("\nValor do real antes: %.2f\nValor do inteiro depois: %.2f", real, *pReal);
  printf("\nValor do caractere antes: %c\nValor do caractere depois: %c", caractere, *pCaractere);
}