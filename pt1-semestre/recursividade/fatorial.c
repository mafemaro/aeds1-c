// funcao recursiva - identificar as chamadas recursivas e condicoes de parada
#include <stdio.h>
int fat(int n){
  int resp;
  
  if (n == 1){ // condicoes de parada
    resp = 1;
  } else {
    resp = n * fat(n - 1); // a chamada
  }
  
  return resp;
}
int main() {
  int n = 5; 
  int resultado = fat(n);
  
  // int resultado = fat(5)
  printf("Fatorial de %d é: %d\n", n, resultado);
}