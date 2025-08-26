// Ler um número inteiro, verificar e escrever se ele é divisível ou não por 7

#include<stdio.h>

int main(){
    int num;

    scanf("%d", &num);

    if(num % 7 == 0){
        printf("Eh divisivel por 7");
    }else{
         printf("Nao eh divisivel por 7");
    }
}
