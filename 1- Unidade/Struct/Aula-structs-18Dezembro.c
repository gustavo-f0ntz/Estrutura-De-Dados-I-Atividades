#include <stdio.h>
#include <stdlib.h>

// exemplo de aninhamento de estruturas

typedef struct disciplina {
    char nome[20];
    float nota;
    int codigo;
} Disciplina;

typedef struct aluno {
    char nome[20];
    int idade;
    int matricula;
    Disciplina *materias[2]; // aninhamento da estrutura disciplina na estrutura aluno
} Aluno;

int main() {
    Aluno *aluno = (Aluno*) malloc(sizeof(Aluno));
    if (aluno == NULL) {
        exit(1);
    }
    // aloca memoria para o vetor de 2 disciplinas.
    for(int i = 0; i < 2; i++) {
        aluno->materias[i] = (Disciplina*) malloc(sizeof(Disciplina));
        if (aluno->materias[i] == NULL) {
            exit(1);
        }
    }
    printf("Informe os dados do aluno: nome, idade e matricula\n");
    scanf("%s %d %d", aluno->nome, &aluno->idade, &aluno->matricula);

    // cadastro das disciplinas
    for (int index = 0; index < 2; index++) {
        printf("Cadastro das disciplinas %d\n", index);
        scanf(" %[^\n]", aluno->materias[index]->nome);
        scanf("%d", &aluno->materias[index]->codigo);
        scanf("%f", &aluno->materias[index]->nota);
    }

    return 0;
}