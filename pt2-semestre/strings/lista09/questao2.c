// m programa em C que leia um nome e exiba-o somente se a primeira letra for a letra ‘a‘ ou ‘A‘
#include<stdio.h>
int main(){
  char nome[100];

  printf("\nDigite seu nome: ");
  fgets(nome, sizeof(nome), stdin);

  if(nome[0] == 'A' || nome[0] == 'a'){
    printf("\n%s", nome);
  }else{
    printf("\nO nome nao comeca com a ou A");
  }
}