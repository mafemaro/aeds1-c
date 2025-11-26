// Repita o exercício anterior, mas agora utilizando a função strcmp para realizar a comparação entre as duas strings
#include<stdio.h>
#include<string.h>
int main(){
  char string1[100];
  char string2[100];

  printf("\nDigite a primeira string: ");
  fgets(string1, sizeof(string1), stdin);

  printf("\nDigite a segunda string: ");
  fgets(string2, sizeof(string2), stdin);
  
  if(strcmp(string1, string2) == 0) printf("\nSao iguais!");
  else printf("\nNao sao iguais");
}