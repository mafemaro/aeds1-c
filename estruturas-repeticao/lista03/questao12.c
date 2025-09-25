// Faça um programa que leia um caractere e se esse for uma letra maiúscula, imprima “Maiúscula”.
// Senão, se ele for uma letra minúscula, imprima “Minúscula”. Senão, se for um dígito, imprima
// dígito. Senão imprima “Outro caractere”.
#include<stdio.h>
#include <ctype.h>

int main(){
  char caractere;
  printf("Digite um caracter: ");
  scanf("%c", &caractere);

  if(isupper(caractere)){ // A função isupper() retorna um valor diferente de zero (verdadeiro) se o caractere for maiúsculo
    printf("\nMaiuscula");
  }else if(islower(caractere)){ // : A função islower() retorna um valor diferente de zero (verdadeiro) se o caractere for minúsculo
    printf("\nMinuscula");
  }else{
    printf("\nDigito");
  }
}