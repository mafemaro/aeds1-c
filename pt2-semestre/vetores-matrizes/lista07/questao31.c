#include <stdio.h>

int main() {
    char respostas[5][10];
    char gabarito[10];
    int resultado[5] = {0};
    int i, j;
    
    printf("Digite as respostas dos 5 alunos (10 questões cada, a/b/c/d):\n");
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 10; j++) {
            scanf(" %c", &respostas[i][j]);
        }
    }
    
    printf("Digite o gabarito (10 letras a/b/c/d):\n");
    for (j = 0; j < 10; j++) {
        scanf(" %c", &gabarito[j]);
    }
    
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 10; j++) {
            if (respostas[i][j] == gabarito[j]) {
                resultado[i]++;
            }
        }
    }
    
    printf("Pontuações dos alunos:\n");
    for (i = 0; i < 5; i++) {
        printf("Aluno %d: %d\n", i + 1, resultado[i]);
    }
    
    return 0;
}