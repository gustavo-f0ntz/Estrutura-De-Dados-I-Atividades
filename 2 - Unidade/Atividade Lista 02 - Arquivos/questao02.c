/*
    Questao 2 - 

    Implemente um programa em C para ler o nome e as notas de um n´umero N de alunos e armazen´a-los
em um arquivo.



*/

#include <stdio.h>
#include <stdlib.h>

#define MAX_NOME 50 

typedef struct {
    char nome[MAX_NOME];
    float nota1, nota2, nota3;
} Aluno;

int main() {
    FILE *arquivo;
    char nomeArquivo[] = "alunos.txt";

    // Abrir o arquivo para escrita
    arquivo = fopen(nomeArquivo, "w");
    if (arquivo == NULL) {
        perror("Erro ao abrir o arquivo para escrita");
        return EXIT_FAILURE;
    }

    // Solicitar informações ao usuário e escrever no arquivo
    int quantidadeAlunos;

    printf("Quantidade de alunos a serem cadastrados: ");
    scanf("%d", &quantidadeAlunos);

    // Limpar o buffer de entrada após a leitura de quantidade
    while (getchar() != '\n');

    Aluno aluno;

    for (int i = 0; i < quantidadeAlunos; i++) {
        printf("\nAluno %d:\n", i + 1);

        printf("Nome: ");
        scanf(" %[^\n]", aluno.nome);

        printf("Nota 1: ");
        scanf("%f", &aluno.nota1);

        printf("Nota 2: ");
        scanf("%f", &aluno.nota2);

        printf("Nota 3: ");
        scanf("%f", &aluno.nota3);

        // Limpar o buffer de entrada após a leitura das notas
        while (getchar() != '\n');

        // Escrever no arquivo
        fprintf(arquivo, "%s\t%.2f\t%.2f\t%.2f\n", aluno.nome, aluno.nota1, aluno.nota2, aluno.nota3);
    }

    // Fechar o arquivo
    fclose(arquivo);

    printf("\nInformacoes dos alunos foram armazenadas em %s\n", nomeArquivo);

    return EXIT_SUCCESS;
}
