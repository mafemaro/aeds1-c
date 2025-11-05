// um programa em C que leia uma string e determine o seu comprimento, sem utilizar a função strlen
#include<stdio.h>
int main(){
  char frase[100];

  printf("\nDigite sua frase: ");
  scanf("%[^\n]", frase);

  int i = 0;
  while(frase[i]!= '\0'){
    i++;
  }

  printf("\nO comprimento da string eh: %d", i);
}