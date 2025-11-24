// programa em C que leia duas strings e as concatene em uma terceira string, sem utilizar a função strcat
#include<stdio.h>
#include<string.h>

int main(){
  char string1[100], string2[100], string3[100];

  printf("\nDigite as duas strings: ");
  scanf("[^\n] [^\n]", &string1, &string2);

  int i = 0, j = 0;
  while (string1[i] != '\0') {
    string3[j] = string1[i];
    i++;
    j++;
  }

  i = 0;
  while (string2[i] != '\0') {
    string3[j] = string2[i];
    i++;
    j++;
  }

  string3[j] = '\0';

  printf("String concatenada: %s\n", string3);
}