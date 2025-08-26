// Ler dois caracteres e escreve-los em ordem alfabética

#include<stdio.h>

int main(){
  char char1, char2;

  printf("Digite dois caracteres: ");
  scanf("%c %c", &char1, &char2);

  if(char1 > char2){
    printf("\nOrdem alfabetica: %c%c", char2, char1);
  }else if(char2 > char1){
    printf("\nOrdem alfabetica: %c%c", char1, char2);
  }else{
    printf("\nOs dois caracteres digitados sao iguais.");
  }
}