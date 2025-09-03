// ler n numeros e imprimir a soma deles. o n valor deve ser lido do teclado

#include<stdio.h>
int main(){
  int n, soma = 0, numero;

  printf("Digite a quantidade de numeros: ");
  scanf("%d", &n);

  for(int i = 0; i < n; i++){
    printf("\nDigite um numero: ");
    scanf("%d", &numero);

    soma+= numero
  }

  printf("\nA soma dos %d digitados eh: %d", n, soma);
}