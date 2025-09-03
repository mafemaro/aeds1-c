// funcao de calcular potencia 
#include<stdio.h>

int potencia(int base, int expoente){
  int resp = 1;

  for(int i = 1; i <= 10; i++){
    resp = resp * base;
  }
  return resp; // serve como um printf, para retornar a resposta na chamada da funcao
}

int main(){
  int num;
  printf("Entre com um numero: ");
  scanf("%d", &num);

  for(int i = 1; i <=num; i++){
    printf("\n2 ^ %d = %d", i, potencia(2, i));
  }
}