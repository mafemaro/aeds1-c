#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    int N;
    scanf("%d", &N);

    char palavra[100];
    fgets(palavra, sizeof(palavra), stdin);
    palavra[strcspn(palavra, "\n")] = '\0';

    for (int i = 0; palavra[i]; i++) {
        palavra[i] = tolower(palavra[i]);
    }

    int contador = 0;

    for (int i = 0; i < N; i++) {
        char frase[1000];
        fgets(frase, sizeof(frase), stdin);
        frase[strcspn(frase, "\n")] = '\0';

        char fraseCopia[1000];
        strcpy(fraseCopia, frase);

        char *token = strtok(fraseCopia, " ");
        int encontrou = 0;

        while (token != NULL) {
            char palavraAtual[100];
            strcpy(palavraAtual, token);
            for (int j = 0; palavraAtual[j]; j++) {
                palavraAtual[j] = tolower(palavraAtual[j]);
            }

            if (strcmp(palavraAtual, palavra) == 0) {
                encontrou = 1;
                break;
            }
            token = strtok(NULL, " ");
        }

        if (encontrou) contador++;
    }

    printf("%d\n", contador);
    return 0;
}
