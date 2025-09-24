// usuario vai inserir dois numeros int positivos A e B onde A < B
// caso A >= B envie mensagem e peca outros valores ate a condicao A < B ser verdadeira
// comando de repeticao para percorrer todos os numeros entre A e B
// para cada numero, informar se ele eh primo
// para os valores do intervalo tb, verificar quantos numeros do intervalo
// sao divisiveis por 2 e 3 ao mesmo tempo
/* #include<stdio.h>

int main(){
  int A, B;
  printf("\nDigite dois numeros positivos: ");
  scanf("%d %d", &A, &B);
  if(A >= B){
    printf("Digite outros valores ate A < B");
  }else{
    // parte 2
    for(int i = A; i <= B; i++){
           
    // parte 3
    if(i % 1 == 0 && i % i == 0){
      printf("\nO numero %d eh primo", i);
    }else{
      printf("\nO numero %d nao eh primo", i);
    }

    // parte 4
    if(i % 2 == 0 && i % 3 == 0){
      printf("\nO numero %d eh divisivel por 2 e 3 ao mesmo tempo", i);
    }else{
      printf("\nO numero %d eh divisivel por 2 e 3 ao mesmo tempo", i);
    }
  }
} */