// funcao recursiva para imprimir a série Fibonacci usando recursão
#include<stdio.h>
int fib(int n){
  int resp;

  if(n == 0 || n == 1){ // condicoes de parada - se nao tem condicao de parada = loop infinito
    resp = 1;
  } else {
    resp = fib (n - 1) + fib (n - 2); // aqui a funcao ta sendo chamada
  }

  return resp;
}

// a cada chamada recursiva o n se aproxima do ultimo valor

int main(){
  int n;

  printf("\nInsira o numero de termos para a serie (<20): ");
  int resp = fib(n);

  printf("\nA serie eh:\n%d", fib);

}