// Ler dois valores reais, determinar e escrever o maior deles, ou os dois se forem iguais

#include <stdio.h>

int main()
{
  float valor1, valor2;

  printf("\nDigite dois valores reais: ");
  scanf("%f %f", &valor1, &valor2);

  if (valor1 > valor2)
  {
    printf("\nO valor %.2f eh maior que o %.2f\n(O valor 1 eh maior do que o 2)!\n", valor1, valor2);
  }
  else if (valor2 > valor1)
  {
    printf("\nO valor %.2f eh maior que o %.2f\n(O valor 2 eh maior do que o 1)!\n", valor2, valor1);
  }
  else
  {
    printf("Os valores %.2f e %.2f são iguais!", valor1, valor2);
  }
}