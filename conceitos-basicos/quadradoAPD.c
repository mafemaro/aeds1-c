#include<stdio.h>
#include<math.h>


// entrada : lado
// processamento : perimetro, area, diagonal
// saida : resultadoo calculado dos 3 processamentos


int main(){
    float lado, perimetro, area, diagonal;

    scanf("%f", &lado);

    perimetro = 4 * lado;
    area = lado * lado;
    diagonal = lado * sqrt(2);

    printf("\nPerimetro: %.2f, \nArea: %.2f, \nDiagonal: %.2f", perimetro, area, diagonal);
}
