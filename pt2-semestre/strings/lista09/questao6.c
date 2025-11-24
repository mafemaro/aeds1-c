// Repita o exercício anterior, mas agora utilizando a função strcat para realizar a concatenação
#include<stdio.h>
#include<string.h>

int main(){
  char string1[100], string2[100];

  printf("\nDigite as duas strings: ");
  scanf("[^\n] [^\n]", &string1, &string2);

  strcat(string1, string2);

  printf("\nString concatenada: %s\n", string1);
}