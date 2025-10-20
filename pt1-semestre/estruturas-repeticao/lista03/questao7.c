// Os alunos de uma turma com numAlunoS fizeram numP rova provas. Leia cada uma das
// numP rova provas feitas por cada um dos numAlunoS alunos. Imprima na tela: a média de
// cada aluno, a média da turma e o percentual dos alunos que tiveram média maior ou igual a 80%

#include <stdio.h>

int main() {
    int numAlunos, numProvas;
    
    printf("Digite o numero de alunos e o numero de provas: ");
    scanf("%d %d", &numAlunos, &numProvas);
    
    float somaTurma = 0.0f;
    int alunosAcima80 = 0;
    
    for (int i = 0; i < numAlunos; i++) {
        float somaAluno = 0.0f;
        
        for (int j = 0; j < numProvas; j++) {
            float nota;
            scanf("%f", &nota);
            somaAluno += nota;
        }
        
        float mediaAluno = somaAluno / numProvas;
        
        printf("Media do aluno %d: %.2f\n", i + 1, mediaAluno);
        
        somaTurma += mediaAluno;
        
        if (mediaAluno >= 80.0f) {
            alunosAcima80++;
        }
    }
    
    float mediaTurma = somaTurma / numAlunos;
    
    float percentual = (float)alunosAcima80 / numAlunos * 100.0f;
    
    printf("Media da turma: %.2f\n", mediaTurma);
    
    printf("Percentual de alunos com media >= 80: %.2f%%\n", percentual);
    
    return 0;
}
