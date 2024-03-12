#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "aluno.h"

Aluno* cria_aluno(char nome[], int matricula) {
    Aluno* aluno = (Aluno*)malloc(sizeof(Aluno));
    if (aluno != NULL) {
        strcpy(aluno->nome, nome);
        aluno->matricula = matricula;
        aluno->num_disciplinas = 0;
        for (int i = 0; i < 10; i++) {
            aluno->disciplinas[i] = NULL;
        }
    }
    return aluno;
}

void matricula_disciplina(Aluno* aluno, Disciplina* disciplina) {
    if (aluno->num_disciplinas < 10) {
        for (int i = 0; i < aluno->num_disciplinas; i++) {
            if (aluno->disciplinas[i] == disciplina) {
                printf("O aluno ja esta matriculado nesta disciplina.\n");
                return;
            }
        }
        aluno->disciplinas[aluno->num_disciplinas] = disciplina;
        aluno->num_disciplinas++;
        printf("Aluno matriculado na disciplina com sucesso.\n");
    } else {
        printf("Limite de disciplinas excedido para este aluno.\n");
    }
}

void exclui_aluno(Aluno* aluno) {
    free(aluno);
}

void exibe_info_aluno(Aluno* aluno) {
    printf("Nome: %s\n", aluno->nome);
    printf("Matricula: %d\n", aluno->matricula);
    printf("Disciplinas matriculadas:\n");
    for (int i = 0; i < aluno->num_disciplinas; i++) {
        printf("- %s\n", aluno->disciplinas[i]->nome);
    }
}
