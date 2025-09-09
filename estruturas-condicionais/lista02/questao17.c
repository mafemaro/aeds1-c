// ler caractere e a medida do raio do circulo
// se for T, area do triangulo inscrito
// se for H, area do hexagon inscrito
// se for outro caracter, mensagem apropriada

#include<stdio.h>
#include<math.h>

int main(){
  char caractere;
  float raio, area;

  printf("Digite o caractere: ");
  scanf("%c", &caractere);

  printf("\nDigite o raio do circulo: ");
  scanf("%f", &raio);

  switch (caractere){

  case 'T':
  case 't':{
  // area do triangulo inscrito
    area = (3 * sqrt(3) / 4) * raio * raio;
    printf("\nArea do triangulo inscrito: %.2f", area);
      break;
  }

  case 'Q':
  case 'q':{
  // area do quadrado inscrito
    area = 2 * raio * raio;
    printf("\nArea do quadrado inscrito: %.2f", area);
      break;
  }

  case 'H':
  case 'h':{
    area = (3 * sqrt(3) / 2) * raio * raio;
    printf("\nArea do hexagono inscrito: %.2f", area);
      break;
  }
  
  default:{
    printf("\nCaractere invalido. Digite T, Q ou H");
      break;
    }
  }
}