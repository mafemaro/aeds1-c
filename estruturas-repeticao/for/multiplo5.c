// imprimm os quatro primeiros multiplos de 5

#include<stdio.h>

int main(){
  int valor = 5;

  for(int i = 0; i < 4; i++){
    printf("\t%d", valor);
    valor += 5;
  }

   /* as variaveis i e valor so existem dentro do escopo do for 
   for(int i = 0, valor = 5; i < 4; i += 1, valor +=5){
    printf("\t%d", valor);
  } */

}