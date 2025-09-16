// codigo abaixo apresenta erros
// a) identificar os erros    b) explicar o que deve ser corrigido
// OBJETIVO DO PROGRAMA: Calcular a media dos pares dentre os N numeros reais informados

/*
float soma = 0, num;
int N;

printf("Quantos numeros \n");
scanf("%d", &N);

for(int val = N; val <= N; val--){
  printf("Digite um numero: ");
  scanf("%f", &num);

  soma += num;

  printf("A media eh: %.2f\n", soma / N);
}
*/

/* LETRA A
  erro 1: loop declarado errado -> nao pode alocar o valor da variavel 'val' como n, o loop da errado (e colocar val++, nao val--)
  erro 2: nao ter a verificacao dos numeros pares
  erro 3: printf com a media DENTRO do loop -> todas as vezes vai mostrar a media e nao deve ser assim
  erro 4: o resultado sendo printado dividindo soma com a quantidade de numeros, mas deveria ser dividido pela qtde de pares
*/

// LETRA B: codigo corrigido

#include<stdio.h>
int main(){
float soma = 0, num;
int N, pares = 0;

printf("\nQuantos numeros: ");
scanf("%d", &N); // -> N eh a quantidade

  for(int val = 1; val <= N; val++){
    printf("\nDigite um numero: ");
    scanf("%f", &num);

    int inteiro = num; // criei uma variavel do tipo int com o valor da variavel 'num' tipo float pq na parte da verificacao nao pode numeros reais (exemplo: 10,5 nao eh par nem impar)...

    if(inteiro % 2 == 0){
      soma += num;
      pares++;
    }
  }

  printf("\nA media eh: %.2f", soma / pares);
}