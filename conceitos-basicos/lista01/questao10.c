// Ler dois n�meros reais e salv�-los nas vari�veis A e B. Em seguida, troque os valores das duas
// vari�veis de forma que a vari�vel A passe a ter o valor da vari�vel B e vice-versa. No final, mostre
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
