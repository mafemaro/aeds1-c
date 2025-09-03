// ler um numero inteiro: 
// -Se ele for 1 ou 2, ler as medidas dos lados de um retângulo, calcular e escrever a área do círculo circunscrito a este retângulo.
// - Se for 3 ou 4 ou 5, ler a medida do raio de um círculo. Calcular e escrever a área do quadrado inscrito no mesmo.
// - Se for outro número inteiro que não estes, ler a medida do lado de um quadrado, calcular e escrever a área da coroa circular formada pelo círculo inscrito e circunscrito a este quadrado.

#include<stdio.h>
#include<math.h>

int main(){
  int numero;
  float pi = 3.14;
  
  printf("Digite um numero: ");
  scanf("%d", &numero);

  switch (numero){
    case 1: 
    case 2: {
    // lados de um retangulo, area do circulo circunscrito

      float lado1, lado2;
      printf("\nDigite os dois lados do retangulo: ");
      scanf("%f %f", &lado1, &lado2);

      float diagonal = sqrt(lado1 * lado1 + lado2 * lado2);
      float raio = diagonal / 2.0;
      float areaCirculo = pi * raio * raio;
      
      printf("\nA area do circulo circunscrito do retangulo eh: %.2f", areaCirculo);
      break;
    }

      case 3:
      case 4:
      case 5: {
     // medida do raio de um círculo, área do quadrado inscrito no mesmo.

      float raio;
      printf("\nDigite o raio do circulo");
      scanf("%f", &raio);

      float areaQuadrado = 2 * raio * raio;

      printf("\nA Area do quadrado inscrito no circulo eh: %.2f", areaQuadrado);
      break;
    }

      default: {
      // lado do quadrado, a área da coroa circular formada pelo círculo inscrito e circunscrito

      float lado;
      printf("\nDigite o lado do quadrado: ");
      scanf("%f", &lado);

      float areaCoroa = pi * (lado * lado) / 4.0;

      printf("\nA area da coroa circular eh: %.2f", areaCoroa);
      break;
    }
  }
}