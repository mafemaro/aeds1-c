// Ler três números reais, verificar se podem ou não ser lados de um triângulo

#include<stdio.h>

int main(){
    float lado1, lado2, lado3;

    printf("Digite os 3 lados: ");
    scanf("%f %f %f", &lado1, &lado2, &lado3);

    if (lado1 + lado2 > lado3 && lado1 + lado3 > lado2 && lado2 + lado3 > lado1){ // a soma de dois lados tem que ser maior que o 3
        printf("Podem ser lados de um triangulo");
    }else{
        printf("Nao podem ser lados de um triangulo");
    }
}
