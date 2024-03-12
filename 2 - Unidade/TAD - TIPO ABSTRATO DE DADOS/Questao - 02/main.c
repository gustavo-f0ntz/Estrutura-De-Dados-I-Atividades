#include <stdio.h>
#include "aluno.h"
#include "disciplina.h"

int main() {
    Disciplina* d1 = cria_disciplina("Matematica", 101);
    Disciplina* d2 = cria_disciplina("Fisica", 102);
    Disciplina* d3 = cria_disciplina("Quimica", 103);

    Aluno* a1 = cria_aluno("Joao", 1001);
    Aluno* a2 = cria_aluno("Maria", 1002);

    matricula_disciplina(a1, d1);
    matricula_disciplina(a1, d2);
    matricula_disciplina(a2, d2);
    matricula_disciplina(a2, d3);

    printf("Informacoes do Aluno 1:\n");
    exibe_info_aluno(a1);

    printf("\nInformacoes do Aluno 2:\n");
    exibe_info_aluno(a2);

    exclui_aluno(a1);
    exclui_aluno(a2);

    exclui_disciplina(d1);
    exclui_disciplina(d2);
    exclui_disciplina(d3);

    return 0;
}
