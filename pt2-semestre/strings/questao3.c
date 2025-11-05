// programa em C que leia duas strings e compare se elas são iguais sem usar strcmp
#include <stdio.h>

int main() {
    char str1[100], str2[100];
    int i = 0;
    int iguais = 1; // assume 1 (verdadeiro) se as strings forem iguais

    printf("Digite a primeira string: ");
    scanf("%s", str1);

    printf("Digite a segunda string: ");
    scanf("%s", str2);

    while (str1[i] != '\0' && str2[i] != '\0') {
        if (str1[i] != str2[i]) {
            iguais = 0;
            break;
        }
        i++;
    }

    // ve se uma string acaba antes da outra
    if (str1[i] != str2[i]) {
        iguais = 0;
    }

    if (iguais) {
        printf("As strings sao iguais.\n");
    } else {
        printf("As strings sao diferentes.\n");
    }

    return 0;
}
