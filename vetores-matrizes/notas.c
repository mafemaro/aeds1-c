// -> ler uma matriz 5 X 10 - 5 alunos em 10 questoes de uma prova
// -> ler tambem um vetor gabarito das 10 questoes (sendo as respostas a, b, c ou d)
// -> o programa deve comparar as respostas de cada aluno com o gabarito e gerar um vetor
//    chamado resultado que contenha a pontuacao obtida por cada aluno
#include <stdio.h>
#define TAM_ALUNOS 5
#define TAM_QUESTOES 10

int main() {
    char respostas[TAM_ALUNOS][TAM_QUESTOES];
    char gabarito[TAM_QUESTOES];
    int resultado[TAM_ALUNOS] = {0};

    // Ler o gabarito (10 respostas: a, b, c ou d)
    printf("Digite o gabarito das 10 questoes (a, b, c ou d):\n");
    for (int j = 0; j < TAM_QUESTOES; j++) {
        printf("Questao %d: ", j + 1);
        scanf(" %c", &gabarito[j]);  // Espaço antes de %c para ignorar quebras de linha
    }

    // Ler as respostas dos 5 alunos (matriz 5x10)
    for (int i = 0; i < TAM_ALUNOS; i++) {
        printf("\nRespostas do aluno %d:\n", i + 1);
        for (int j = 0; j < TAM_QUESTOES; j++) {
            printf("Questao %d: ", j + 1);
            scanf(" %c", &respostas[i][j]);
        }
    }

    // Calcular pontuacoes: comparar com gabarito
    for (int i = 0; i < TAM_ALUNOS; i++) {
        for (int j = 0; j < TAM_QUESTOES; j++) {
            if (respostas[i][j] == gabarito[j]) {
                resultado[i]++;
            }
        }
    }

    // Imprimir o vetor resultado (pontuacao de cada aluno)
    printf("\nPontuacoes obtidas:\n");
    for (int i = 0; i < TAM_ALUNOS; i++) {
        printf("Aluno %d: %d pontos\n", i + 1, resultado[i]);
    }

    return 0;
}