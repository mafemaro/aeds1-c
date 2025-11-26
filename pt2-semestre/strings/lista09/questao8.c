// Repita o exercício anterior, mas agora utilizando a função strcpy para realizar a cópia da string
#include<stdio.h>
#include<string.h>

int main(){
  char string[100], copia[100];

  printf("\nDigite a string: ");
  fgets(string, sizeof(string), stdin);

  strcpy(copia, string);

  printf("\nString copiada: %s", copia);
}