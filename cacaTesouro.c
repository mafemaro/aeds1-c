#include<stdio.h>
int main(){
  int qtdeSeries, numero, menor;

  printf("\nQtde de series: ");
  scanf("%d", &qtdeSeries);

  for(int i = 0; i < qtdeSeries; i++){
    printf("\n\t\t\t\tSerie:\t\t\t\t\n");
    printf("\nDigite numeros | negativo encerra a serie: ");
    menor = 0;

    int primeiroNumero = 0;

    while(1){
      scanf("%d", &numero);

      if(numero < 0) break;

      if(primeiroNumero == 0){
        menor = numero;
        primeiroNumero = 1;
      } else if(numero < menor) menor = numero;

      if(primeiroNumero == 0) printf("\nNenhum numero positivo digitado");
      else printf("\nMenor numero da serie: %d\n", menor);
    }
  }
}