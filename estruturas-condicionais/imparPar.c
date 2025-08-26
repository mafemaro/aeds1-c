// Ler um numero inteiro e calcular se par = quadrado, impar = cubo

#include<stdio.h>
#include<math.h>

int main(){
    int numero, par, impar;

    scanf("%d", &numero);

    if(numero % 2 == 0){
        par = pow(numero, 2);
        printf("%d", par);
        // ou se nao tiver  biblioteca: par = numero * numero
    }else{
        impar = pow(numero, 3);
        printf("%d", impar);
        // ou se nao tiver  biblioteca: impar = numero * numero
    }
}
