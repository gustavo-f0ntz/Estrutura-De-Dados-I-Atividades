#include <stdio.h>
#include <stdlib.h>

#define MAX_ALUNOS 100

typedef struct {
    char nome[80];
    char disciplina[20];
    int matricula;
    float nota[3];
    float media;
} Aluno;

typedef struct {
    int tamanho;
    Aluno *alunos;
} Turma;

Turma criarTurma(int tamanho) {
    Turma turma;
    turma.tamanho = tamanho;
    turma.alunos = malloc(tamanho * sizeof(Aluno));

    if (turma.alunos == NULL) {
        printf("Erro de alocação de memória.\n");
        exit(EXIT_FAILURE);
    }

    for (int i = 0; i < tamanho; i++) {
        turma.alunos[i].matricula = i + 1;
    }

    return turma;
}

void preencherAluno(Aluno *aluno) {
    printf("Digite o nome do aluno: ");
    scanf("%s", aluno->nome);
    printf("Digite a disciplina: ");
    scanf("%s", aluno->disciplina);
}

void registrarNotas(Aluno *aluno) {
    printf("Digite a primeira nota: ");
    scanf("%f", &aluno->nota[0]);
    printf("Digite a segunda nota: ");
    scanf("%f", &aluno->nota[1]);
    printf("Digite a terceira nota: ");
    scanf("%f", &aluno->nota[2]);
    aluno->media = (aluno->nota[0] + aluno->nota[1] + aluno->nota[2]) / 3;
}

void imprimirAluno(Aluno *aluno) {
    printf("-----------------------------------\n");
    printf("Nome: %s\n", aluno->nome);
    printf("Disciplina: %s\n", aluno->disciplina);
    printf("Matricula: %d\n", aluno->matricula);
    printf("Nota 1: %.2f\n", aluno->nota[0]);
    printf("Nota 2: %.2f\n", aluno->nota[1]);
    printf("Nota 3: %.2f\n", aluno->nota[2]);
    printf("Media: %.2f\n", aluno->media);
    printf("-----------------------------------\n\n");
}

void imprimirTurma(Turma *turma) {
    for (int i = 0; i < turma->tamanho; i++) {
        imprimirAluno(&turma->alunos[i]);
    }
}

void imprimirTurmaAprovada(Turma *turma) {
    printf("------ Alunos Aprovados ------\n");
    for (int i = 0; i < turma->tamanho; i++) {
        if (turma->alunos[i].media >= 7) {
            imprimirAluno(&turma->alunos[i]);
        }
    }
    printf("------------------------------\n\n");
}

void liberarTurma(Turma *turma) {
    free(turma->alunos);
}

int main(void) {
    int op;
    int tamanhoDaTurma;

    printf("Digite o total de alunos para registrar (maximo %d): ", MAX_ALUNOS);
    scanf("%d", &tamanhoDaTurma);

    if (tamanhoDaTurma <= 0 || tamanhoDaTurma > MAX_ALUNOS) {
        printf("Tamanho invalido. Encerrando o programa.\n");
        return EXIT_FAILURE;
    }

    Turma turma = criarTurma(tamanhoDaTurma);

    do {
        printf("---------- Menu de Opcoes ----------\n");
        printf("1 - Registrar notas\n");
        printf("2 - Imprimir a lista de alunos e informacoes gerais\n");
        printf("3 - Imprimir a lista de alunos aprovados\n");
        printf("4 - Sair\n");
        printf("---------------------------\n");

        printf("Digite a opcao: ");
        scanf("%d", &op);

        switch (op) {
            case 1:
                for (int i = 0; i < turma.tamanho; i++) {
                    system("cls"); 
                    printf("----------------- ALUNO %d ---------------\n", i + 1);
                    preencherAluno(&turma.alunos[i]);
                    registrarNotas(&turma.alunos[i]);
                    printf("-----------------------------------\n\n");
                }
                break;

            case 2:
                system("cls"); 
                imprimirTurma(&turma);
                break;

            case 3:
                system("cls"); 
                imprimirTurmaAprovada(&turma);
                break;

            case 4:
                printf("Saindo do programa.\n");
                break;

            default:
                printf("Opcao invalida. Tente novamente!!!\n");
                break;
        }
    } while (op != 4);

    liberarTurma(&turma);

    return 0;
}
