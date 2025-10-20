// faca o quadro de memoria e mostre a saida na tela para o codigo abaixo

#include<stdio.h>

int main(){
    int num = 0;

    while(num < 4){ // enquanto o numero for menor que 4, ele vai...
        printf("%d", num++);
        num += 2;
    }
}
