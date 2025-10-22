// um programa para ler a nota da prova de 15 alunos e armazená-las em um vetor. Em seguida, calcule e imprima a média geral da turma.
#include <stdio.h>

int main() {
    float vetorNotas[15];
    float soma = 0.0;
    float media;

    for (int i = 0; i < 15; i++) {
        printf("Digite a nota do aluno: ");
        scanf("%f", &vetorNotas[i]);
    }

    for (int i = 0; i < 15; i++) {
        soma += vetorNotas[i];
    }

    media = soma / 15.0;

    printf("\nA media das notas da turma eh: %.2f\n", media);

    return 0;
}
