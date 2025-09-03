// Ler um número inteiro. Se ele for par calcular e escrever o seu quadrado e se for ímpar calcular e escrever seu cubo.
#include<stdio.h>
#include<math.h>

int main(){
  int numero;

  printf("Digite um numero: ");
  scanf("%d", &numero);

  if(numero % 2 == 0){
    int quadrado = 0;
    quadrado = pow(numero, 2);
    printf("O quadrado do numero %d eh: %d", numero, cubo);
  }else{
    int cubo = 0;
    cubo = pow(numero, 3);
    printf("O cubo do numero %d eh: %d", numero, cubo);
  }
}