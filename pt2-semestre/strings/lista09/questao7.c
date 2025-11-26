// programa em C que leia uma string e a copie para outra variável, sem utilizar a função strcpy
#include<stdio.h>
#include<string.h>
int main(){
  char string[100], copia[100];

  printf("\nDigite a string: ");
  fgets(string, sizeof(string), stdin);

  for(int i = 0; i < strlen(string); i++){
    copia[i] += string[i];
  }

  printf("String copiada: %s\n", copia);
}