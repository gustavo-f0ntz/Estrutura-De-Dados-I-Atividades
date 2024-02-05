#include <stdio.h>
#include <stdlib.h>

#define MAX_NOME 50

typedef struct {
    char nome[MAX_NOME];
    float nota1, nota2, nota3;
    float media;
    int aprovado;
} Aluno;

void calcularMediaEStatus(Aluno *aluno) {
    aluno->media = (aluno->nota1 + aluno->nota2 + aluno->nota3) / 3.0;
    aluno->aprovado = aluno->media >= 7.0 ? 1 : 0;
}

int main() {
    FILE *entrada;
    char nomeArquivoEntrada[] = "entrada_q3.txt";

    // Criar o arquivo de entrada e adicionar dados fictícios
    entrada = fopen(nomeArquivoEntrada, "w");
    if (entrada == NULL) {
        perror("Erro ao criar o arquivo de entrada");
        return EXIT_FAILURE;
    }

    fprintf(entrada, "Alice\t8.5\t7.0\t9.2\n");
    fprintf(entrada, "Bob\t6.2\t5.5\t7.8\n");
    fprintf(entrada, "Charlie\t9.0\t8.5\t9.8\n");
    fprintf(entrada, "David\t5.5\t6.0\t4.8\n");
    fprintf(entrada, "Eva\t7.8\t8.0\t7.2\n");

    fclose(entrada);

    // Ler dados do arquivo de entrada e criar arquivo de saída
    FILE *saida;
    char nomeArquivoSaida[] = "saida_q3.txt";

    entrada = fopen(nomeArquivoEntrada, "r");
    if (entrada == NULL) {
        perror("Erro ao abrir o arquivo de entrada");
        return EXIT_FAILURE;
    }

    saida = fopen(nomeArquivoSaida, "w");
    if (saida == NULL) {
        perror("Erro ao abrir o arquivo de saída");
        fclose(entrada);
        return EXIT_FAILURE;
    }

    Aluno aluno;

    while (fscanf(entrada, "%49s%f%f%f", aluno.nome, &aluno.nota1, &aluno.nota2, &aluno.nota3) == 4) {
        calcularMediaEStatus(&aluno);
        fprintf(saida, "Nome: %s\tMédia: %.2f\tSituação: %s\n", aluno.nome, aluno.media, aluno.aprovado ? "Aprovado" : "Reprovado");
    }

    fclose(entrada);
    fclose(saida);

    printf("Processo concluído. Resultados salvos em %s\n", nomeArquivoSaida);

    return EXIT_SUCCESS;
}
