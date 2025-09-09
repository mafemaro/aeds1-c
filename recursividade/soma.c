// função recursiva que recebe número n e retorne a soma de todos os números de 1 até n.
#include <stdio.h>

int soma(int n)
{
  int resp;
  if (n == 0)
  {
    resp = 0;
  }
  else
  {
    resp = n + soma(n - 1);
  }

  return resp;
}

int main()
{
  int n;

  printf("Digite um numero: ");
  scanf("%d", &n);

  int resultado = soma(n);

  printf("\nO Resultado eh: %d", resultado);
}