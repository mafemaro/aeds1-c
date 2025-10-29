#include<stdio.h>
#include<string.h>

int main(){
  char linha[100];
  printf("\nEntre com uma linha: ");
  scanf("%[^\n]", linha); // aqui nao precisa de & porque eh uma string direto

  printf("%s", linha);
}