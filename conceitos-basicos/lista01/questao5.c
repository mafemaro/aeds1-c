// Ler o lado de um quadrado e mostrar o seu perímetro, área e diagonal
// Perímetro (P): P = 4L  Área (A): A = L²  Diagonal (d): d = L√2

#include<stdio.h>
#include<math.h>

int main(){
    float lado, perimetro, area, diag;

    printf("Digite o lado do quadrado: ");
    scanf("%f", &lado);

    perimetro = 4 * lado;
    area = lado * lado;
    diag = lado * sqrt(2);

    printf("\nPerimetro: %.2f\nArea: %.2f\nDiagonal: %.2f");
}
