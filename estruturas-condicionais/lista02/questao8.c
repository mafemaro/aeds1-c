// Ler as medidas dos lados de um triângulo. Verificar e escrever se ele é EQUILÁTERO, ISÓSCELES OU ESCALENO.

#include <stdio.h>

int main(){
  int lado1, lado2, lado3;
  
  printf("Digite os lados do triangulo: ");
  scanf("%d %d %d", &lado1, &lado2, &lado3);

  if (lado1 <= 0 || lado2 <= 0 || lado3 <= 0) {
      printf("As medidas dos lados devem ser maiores que zero!\n");
    } else if (lado1 == lado2 && lado2 == lado3) {
        printf("O triangulo eh equilatero!\n");
    } else if (lado1 == lado2 || lado2 == lado3 || lado1 == lado3) {
        printf("O triangulo eh isosceles!\n");
    } else {
        printf("O triangulo eh escaleno!\n");
    }
}