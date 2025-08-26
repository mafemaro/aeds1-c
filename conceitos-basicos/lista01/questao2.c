// Sabendo que 100 kilowatt de energia custa um s�timo do sal�rio m�nimo, fa�a um algoritmo que
// leia o valor do sal�rio m�nimo e a quantidade de kilowatt gasta por uma resid�ncia, calcule e
// mostre: o valor em reais de cada kilowatt; o valor em reais a ser pago; e o novo valor a ser pago
// por essa resid�ncia com um desconto de 10%

#include<stdio.h>

int main(){
    float salario, kilowatt, valorKilowatt, valorTotal, valorDesconto;

    printf("Digite o valor do salario minimo: ");
    scanf("%f", &salario);

    printf("\nQuantidade de kilowatt gasta por residencia: ");
    scanf("%f", &salario);

    valorKilowatt = kilowatt / 7 / 100;
    valorTotal = valorKilowatt * kilowatt;
    valorDesconto = valorTotal * 0.9;

    printf("Valor por kilowatt: R$ %.2f\n", valorKilowatt);
    printf("Valor total a ser pago: R$ %.2f\n", valorTotal);
    printf("Valor com desconto de 10%%: R$ %.2f\n", valorDesconto);
}
