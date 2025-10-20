// Ler os coeficientes de uma equação do 2º grau, determinar e escrever suas raízes reais ou imaginárias

#include <stdio.h>
#include <math.h>

int main()
{
  float a, b, c, delta, x1, x2;

  printf("Digite os coeficientes a, b e c: ");
  scanf("%f %f %f", &a, &b, &c);

  delta = b * b - 4 * a * c;

  if (delta > 0)
  {
    x1 = (-b + sqrt(delta)) / (2 * a);
    x2 = (-b - sqrt(delta)) / (2 * a);
    printf("As raízes são: %.2f e %.2f\n", x1, x2);
  }
  else if (delta == 0)
  {
    x1 = -b / (2 * a);
    printf("A raiz é: %.2f\n", x1);
  }
  else
  {
    float parteReal = -b / (2 * a);
    float parteImaginaria = sqrt(-delta) / (2 * a);
    printf("As raízes são: %.2f + %.2fi e %.2f - %.2fi\n", parteReal, parteImaginaria, parteReal, parteImaginaria);
  }
}
