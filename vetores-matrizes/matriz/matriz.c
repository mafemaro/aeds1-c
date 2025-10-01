#include<stdio.h>

int main(){
  char matriz[2][2] ={{'a', 'b'}, {'c', 'd'}};
  char *temp = matriz;

  for(int i = 0; i < 2; i++){ // percorrendo a linha da matriz
    for(int j = 0; j < 2; j++){
      printf("(%p) %c\n", temp, *temp); // temp - mostra endereco, *temp - conteudo do ponteiro
      temp++;
    }
  }
  return 0;
}