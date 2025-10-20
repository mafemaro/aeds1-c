// Ler a base e a altura de um retângulo e mostrar o seu perímetro, área e diagonal

#include<stdio.h>
#include<math.h>

int main(){
    float base, altura, perimetro, area, diag;

    printf("Digite a base e a altura de um retangulo: ");
    scanf("%f %f", &base, &altura);

    perimetro = 2 * (base + altura);
    area = base * altura;
    diag = sqrt(pow(base, 2) + pow(altura, 2));

    printf("\nPerimetro: %.2f\nArea: %.2f\nDiagonal: %.2f", perimetro, area, diag);
}

