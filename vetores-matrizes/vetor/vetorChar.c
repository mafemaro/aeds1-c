#include<stdio.h>
int main(){
  char vetor[4] ={'a', 'b', 'c', 'd'};
  char *temp = vetor;

  for(int i = 0; i < 4; i++){ // percorrendo o vetor
    printf("(%p) %c\n", temp, *temp); // temp - mostra endereco, *temp - conteudo do ponteiro
    temp++;
  }
  return 0;
}