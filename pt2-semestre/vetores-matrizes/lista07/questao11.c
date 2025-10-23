/* programa que leia um vetor de 5 posições para números reais e, depois, um código
inteiro. Se o código for:
• 0: finalize o programa;
• 1: mostre o vetor na ordem direta;
• 2: mostre o vetor na ordem inversa.
Caso o código seja diferente de 1 e 2, escreva uma mensagem informando que o código é inválido.
*/
#include<stdio.h>
int main(){
  float vetor[5];

  for(int i = 0; i < 5; i++){
    printf("\nDigite o valor do indice [%d] do vetor: ", i+1);
    scanf("%f", &vetor[i]);
  }

  int opcao;

  printf("\nDigite uma opcao:\n[0]: finalizar programa\n[1]: mostrar vetor na ordem direta\n[2]: mostrar vetor na ordem inversa\n");
  scanf("%d", &opcao);

  switch(opcao){
    case 0: {
      return 0;
      break;
    }

    case 1: {
      printf("\nVetor:\n");
      for(int i = 0; i < 5; i++){
        printf("%.2f\t", vetor[i]);
      }

      break;
    }

    case 2: {
      printf("\nVetor invertido:\n");
      for(int i = 4; i >= 0; i--){
        printf("%.2f\t", vetor[i]);
      }

      break;
    }

    default: {
      printf("\nO codigo digitado eh invalido.");

      break;
    }
  }
}