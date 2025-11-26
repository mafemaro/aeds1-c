// programa em C que leia uma palavra e conte quantas vogais (a, e, i, o, u) ela possui.
// Em seguida, leia um caractere (vogal ou consoante) e substitua todas as vogais da palavra por esse caractere.
#include<stdio.h>
#include<string.h>
int main(){
  char string[100];
  char caractere;

  printf("\nDigite a string: ");
  fgets(string, sizeof(string), stdin);

  printf("\nDigite um caractere para substituir as vogais da string: ");
  scanf("%c", &caractere);

  int contVogal = 0;
  for(int i = 0; i < strlen(string); i++){
    if(string[i] == 'a' || string[i] == 'e' || string[i] == 'i' || string[i] == 'o' || string[i] == 'u' ){
      contVogal++;
      string[i] = caractere;
    }
  }

  printf("\nVogais da string original: %d\nString nova: %s", contVogal, string);
}