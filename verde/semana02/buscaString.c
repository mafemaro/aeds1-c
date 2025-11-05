#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main() {
    int numeroStrings;
    scanf("%d", &numeroStrings);

    char palavraAlvo[100];
    scanf(" %[^\n]", palavraAlvo);

    char palavraAlvoMinuscula[100];
    for (int i = 0; palavraAlvo[i]; i++) {
        palavraAlvoMinuscula[i] = tolower(palavraAlvo[i]);
    }
    palavraAlvoMinuscula[strlen(palavraAlvo)] = 0;

    int contador = 0;
    for (int i = 0; i < numeroStrings; i++) {
        char string[1000];
        scanf(" %[^\n]", string);

        char *token = strtok(string, " ");
        int encontrado = 0;
        while (token != NULL) {
            char palavraMinuscula[100];
            for (int j = 0; token[j]; j++) {
                palavraMinuscula[j] = tolower(token[j]);
            }
            palavraMinuscula[strlen(token)] = 0;

            if (strcmp(palavraMinuscula, palavraAlvoMinuscula) == 0) {
                encontrado = 1;
                break;
            }
            token = strtok(NULL, " ");
        }
        if (encontrado) contador++;
    }

    printf("%d\n", contador);

}
