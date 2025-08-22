// Ler dois números reais e salvá-los nas variáveis A e B. Em seguida, troque os valores das duas
// variáveis de forma que a variável A passe a ter o valor da variável B e vice-versa. No final, mostre
// os valores finais.

#include<stdio.h>

int main(){
    float a, b, temp; // escaninho (variavel) auxiliar ou temporaria para nao dar o mesmo valor

    scanf("%f %f", &a, &b);

    // swap = troca de valores entre duas variaveis
    temp = a;
    a = b;
    b = temp;

    printf("%.1f %.1f", a, b);
}
