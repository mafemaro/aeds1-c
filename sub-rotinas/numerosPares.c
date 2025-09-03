// numero inteiro inserido pelo usuario e mostrar todos os numeros pares de 1 ate o numero
#include <stdio.h>

int pares(int num)
{
    if (num % 2 == 0){
        return 1; // verdadeiro
    }else{
        return 0; // falso
    }
}

int main()
{
    int num, i;
    
    printf("Digite um numero: ");
    scanf("%d", &num);

    printf("\nOs valores pares ate o numero %d sao: ", num);
    for (i = 1; i <= num; i++){
        if (pares(i)){
            printf("%d ", i);
        }
    }
    printf("\n");
    return 0;
}