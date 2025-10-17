// imprimir na tela os 50 primeiros números naturais usando recursão
#include<stdio.h>
int numeroPrimo(int n){
  if (n > 50) return 1;
  else return numeroPrimo(n + 1);
}

int main(){
    printf("Os numeros naturais de 1 a 50 sao: ", imprimirNumerosNaturais(1, 50));

    printf("\n");
}