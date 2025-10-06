// escrever resultado do programa quando...
// a) N = 12    b) N = 6
// c) explique em uma frase simples qual eh o objetivo do programa

#include<stdio.h>

float funcao(int N){
  if (N == 2) return 2;
  else return (funcao(N - 2) + N);
}

int main(){
  int numero;

  printf("\nDigite um numero: ");
  scanf("%d", &numero);

  printf("\nResultado: %.2f", funcao(numero));
}

/*    LETRA A
primeiro passo: subtrair 2 e chamar a proxima funcao (vai ate o dois)
funcao(n - 2)       12 
                    10
                    8
                    6
                    4
                    2

segundo passo: ir voltando com o resultado de cada funcao chamada
funcao(numero) + N  (2) retorna 2
                    (4) + 2 = 6
                    (6) + 6 = 12
                    (8) + 12 = 20
                    (10) + 20 = 30
                    (12) + 30 = 42

resposta: quando N = 12 o resultado sera 42.
*/

/*    LETRA B
primeiro passo: subtrair 2 e chamar a proxima funcao (vai ate o dois)
funcao(n - 2)       6
                    4
                    2

segundo passo: ir voltando com o resultado de cada funcao chamada
funcao(numero) + N  (2) retorna 2
                    (4) + 2 = 6
                    (6) + 6 = 12

resposta: quando N = 6 o resultado sera 12.
*/

/*    LETRA C
resposta: O programa tem como objetivo somar numeros pares de 2 ate N recursivamente.
*/