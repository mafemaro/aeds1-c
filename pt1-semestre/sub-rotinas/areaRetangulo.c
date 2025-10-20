// funcao para calcular a area de um retangulo
#include<stdio.h>

int calcularArea(int base, int altura){
  int area =  base * altura;
  return area;
}

int main(){
  int base, altura, area;
  printf("Digite a base e a altura: ");
  scanf("%d %d", &base, &altura);

  area = calcularArea(base, altura);
  printf("\nA Area eh: %d", area);

  return 0;
}