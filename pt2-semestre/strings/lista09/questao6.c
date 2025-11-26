// Repita o exercício anterior, mas agora utilizando a função strcat para realizar a concatenação
#include<stdio.h>
#include<string.h>

int main(){
  char string1[100], string2[100];

  printf("\nDigite a primeira string: ");
  fgets(string1, sizeof(string1), stdin);

  printf("\nDigite a segunda string: ");
  fgets(string2, sizeof(string2), stdin);

  strcat(string1, string2);

  printf("\nString concatenada: %s", string1);
}