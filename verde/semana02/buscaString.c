#include <stdio.h>
#include <string.h>

int main() {
    int quantidade;
    char palavraBusca[100];

    scanf("%d", &quantidade);
    fflush(stdin);

    scanf("%s", palavraBusca);
    fflush(stdin);

    char frase[100];
    int contador = 0;

    for (int i = 0; i < quantidade; i++) {
        fgets(frase, 100, stdin);
        frase[strcspn(frase, "\n")] = '\0'; // remove o \n

        char *palavra = strtok(frase, " .,;:\n\t[]-_<>?/\\");
        while (palavra != NULL) {
            if (strcasecmp(palavra, palavraBusca) == 0)
                contador++;
            palavra = strtok(NULL, " .,;:\n\t[]-_<>?/\\");
        }
    }

    printf("%d\n", contador);
}
