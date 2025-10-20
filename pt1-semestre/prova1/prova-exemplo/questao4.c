/* Uma sala de aula na PUC possui capacidade para vários lugares. Certo dia resolveram organizar as carteiras da sala de aula pela mão que os alunos preferem escrever. Para isso solicitaram para cada aluno seu sexo (F: feminino, M: masculino) idade e mão que prefere escrever (D: destro, C: canhoto, A: ambidestro).
Implemente um programa em C (ANSI C) que, lendo estes dados, calcule e imprima:

- a quantidade de canhotos;

- o sexo que possui mais ambidestros;

- a média de idade dos homens que são destros.

As informações de cada aluno devem ser lidas até que uma idade nula ou negativa seja digitada. */

#include <stdio.h>

int main() {
    char sexo, mao;
    int idade;

    int qtd_canhotos = 0, ambi_homens = 0, ambi_mulheres = 0, soma_idade_homens_destros = 0, qtd_homens_destros = 0;

    do {
        printf("Digite a idade (0 ou negativa para sair): ");
        scanf("%d", &idade);

        printf("Digite o sexo (F/M): ");
        scanf(" %c", &sexo);

        printf("Digite a mão preferida (D/C/A): ");
        scanf(" %c", &mao);

        // conta canhotos
        if (mao == 'C' || mao == 'c') {
            qtd_canhotos++;
        }

        // conta ambidestros por sexo
        if (mao == 'A' || mao == 'a') {
            if (sexo == 'M' || sexo == 'm') {
                ambi_homens++;
            } else if (sexo == 'F' || sexo == 'f') {
                ambi_mulheres++;
            }
        }

        // soma idade dos homens destros
        if ((sexo == 'M' || sexo == 'm') && (mao == 'D' || mao == 'd')) {
            soma_idade_homens_destros += idade;
            qtd_homens_destros++;
        }
    } while (idade < 1);

    printf("\nQuantidade de canhotos: %d\n", qtd_canhotos);

    if (ambi_homens > ambi_mulheres) {
        printf("Sexo com mais ambidestros: Masculino\n");
    } else if (ambi_mulheres > ambi_homens) {
        printf("Sexo com mais ambidestros: Feminino\n");
    } else {
        printf("Ambos os sexos possuem a mesma quantidade de ambidestros\n");
    }

    if (qtd_homens_destros > 0) {
        float media = (float)soma_idade_homens_destros / qtd_homens_destros;
        printf("Media de idade dos homens destros: %.2f\n", media);
    } else {
        printf("Nao ha homens destros cadastrados.\n");
    }

    return 0;
}
