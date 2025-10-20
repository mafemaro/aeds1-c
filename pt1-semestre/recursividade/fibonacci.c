// funcao recursiva - identificar as chamadas recursivas e condicoes de parada
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