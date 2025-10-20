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
