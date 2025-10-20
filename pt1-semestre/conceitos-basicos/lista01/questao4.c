// Ler o raio de um círculo e mostrar o seu perímetro e área
// perimetro 2 * π * r area π * r²

#include<stdio.h>
#include<math.h>

int main(){
    float raio, perimetro, area;

    printf("Digite o raio do circulo: ");
    scanf("%f", &raio);

    float pi = 3.14;

    perimetro = 2 * pi * raio;
    area = pi * pow(raio,2);

    printf("\nPerimetro: %.2f\nArea: %.2f");
}
