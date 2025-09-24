// programa que le um numero inteiro entre 1 e 7, e retorna o dia da semana
#include<stdio.h>
int main(){
  int diaSemana;
  printf("\nDigite um numero inteiro entre 1 e 7: ");
  scanf("%d", &diaSemana);

  switch (diaSemana){
    case 1:
    printf("\nHoje eh domingo!");
    break;

    case 2:
    printf("\nHoje eh segunda!");
    break;
    
    case 3:
    printf("\nHoje eh terca!");
    break;

    case 4:
    printf("\nHoje eh quarta!");
    break;

    case 5:
    printf("\nHoje eh quinta!");
    break;

    case 6:
    printf("\nHoje eh sexta!");
    break;

    case 7:
    printf("\nHoje eh sabado!");
    break;

    default:
    printf("\nDigite um numero entre 1 e 7!");
    break;
  }
}