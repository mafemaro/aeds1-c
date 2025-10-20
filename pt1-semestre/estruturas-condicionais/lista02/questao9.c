// Ler as medidas dos lados de um triângulo. Verificar e escrever se ele é ACUTÂNGULO, RETÂNGULO ou OBTUSÂNGULO

#include<stdio.h>
#include<math.h>

int main(){
  int lado1, lado2, lado3;

  printf("Digite os tres lados do triangulo: ");
  scanf("%d %d %d", &lado1, &lado2, &lado3);

  // aqui garante que o lado 3 seja sempre o maior.
  int maior, ladoA, ladoB;
    if (lado1 >= lado2 && lado1 >= lado3) {
      maior = lado1;
      ladoA = lado2;
      ladoB = lado3;
    } else if (lado2 >= lado1 && lado2 >= lado3) {
      maior = lado2;
      ladoA = lado1;
      ladoB = lado3;
    } else {
      maior = lado3;
      ladoA = lado1;
      ladoB = lado2;
    }
        
    if (pow(maior, 2) < pow(ladoA, 2) + pow(ladoB, 2)) {
      printf("\nO triangulo eh acutangulo");
    } else if (pow(maior, 2) == pow(ladoA, 2) + pow(ladoB, 2)) {
      printf("\nO triangulo eh retangulo");
    } else {
      printf("\nO triangulo eh obtusangulo");
    }
}