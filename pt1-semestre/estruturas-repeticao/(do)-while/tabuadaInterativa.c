// mostrar tabuada de 1 a 10 do numero digitado pelo usuario e perguntar se quer ver outra tabuada

#include<stdio.h>

int main() {
    int numero, i;
    char resposta;

    do {
        printf("Digite um número para ver a tabuada: ");
        scanf("%d", &numero);

        printf("Tabuada do %d:\n", numero);

        i = 1;
        
        while(i<=10){
            printf("%d x %d = %d\n", numero, i, numero * i);
            i++;
        }

        printf("Deseja ver outra tabuada? (s/n): ");
        scanf(" %c", &resposta);

    } while (resposta == 's' || resposta == 'S');

    printf("\n");
    return 0;
}
