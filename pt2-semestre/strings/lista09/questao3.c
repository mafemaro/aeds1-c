// programa em C que leia duas strings e compare se elas são iguais, sem utilizar a função strcmp
#include<stdio.h>
int main(){
  char string1[100];
  char string2[100];

  printf("\nDigite as duas strings: ");
  scanf("%[^\n] %[^\n]", string1, string2);
  
  int i = 0;
  int iguais = 1;

  while(string1[i] != '\0' && string2[i] != '\0'){
    if(string1[i] != string2[i]){
      iguais = 0; 
      break;
    }
    i++;
  }

  if(string1[i] != '\0' || string2[i] != '\0') iguais = 0;

  if (iguais) printf("\nAs strings sao iguais");
  else printf("\nAs strings sao diferentes");
}