// programa em C para encontrar o número máximo entre dois números usando um ponteiro
#include<stdio.h>
int main(){
  int n1, n2;

  printf("\nDigite os valores de n1 e n2: ");
  scanf("%d %d", &n1, &n2);

  int *p = &n1; // o meu intuito aqui eh apontar para o n1

  if(*p < n2){
    p = &n2; // atribuindo o valor apontado por p para n2 se ele for maior que o endereco apontado por p anteriormente
  }

  printf("\nO numero maximo entre os dois numeros usando ponteiro eh: %d", *p);
}