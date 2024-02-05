#include <stdio.h>
#include <stdlib.h>

#define TAMANHO_VETOR 10

void encontrarMinMaxMedia(int vetor[], int tamanho, int *menor, int *maior, float *media) {
    *menor = vetor[0];
    *maior = vetor[0];
    *media = 0;

    for (int i = 0; i < tamanho; i++) {
        if (vetor[i] < *menor) {
            *menor = vetor[i];
        }

        if (vetor[i] > *maior) {
            *maior = vetor[i];
        }

        *media += vetor[i];
    }

    *media /= tamanho;
}

int main() {
    // Abrir o arquivo de saída para escrever os valores diretamente
    FILE *saida;
    char nomeArquivoSaida[] = "entrada_numeros.txt";

    saida = fopen(nomeArquivoSaida, "w");
    if (saida == NULL) {
        perror("Erro ao abrir o arquivo de saída");
        return EXIT_FAILURE;
    }

    // Preencher o arquivo com valores diretamente
    fprintf(saida, "11 23 45 21 67 89 55 33 77 99\n");

    fclose(saida);

    // Abrir o arquivo de entrada
    FILE *entrada;
    char nomeArquivoEntrada[] = "entrada_numeros.txt";

    entrada = fopen(nomeArquivoEntrada, "r");
    if (entrada == NULL) {
        perror("Erro ao abrir o arquivo de entrada");
        return EXIT_FAILURE;
    }

    // Preencher o vetor com dados do arquivo
    int vetor[TAMANHO_VETOR];

    for (int i = 0; i < TAMANHO_VETOR; i++) {
        if (fscanf(entrada, "%d", &vetor[i]) != 1) {
            perror("Erro ao ler os dados do arquivo");
            fclose(entrada);
            return EXIT_FAILURE;
        }
    }

    fclose(entrada);

    // Encontrar o menor, maior e média
    int menor, maior;
    float media;

    encontrarMinMaxMedia(vetor, TAMANHO_VETOR, &menor, &maior, &media);

    // Abrir o arquivo de saída para escrever os resultados
    char nomeArquivoSaidaResultados[] = "saida_resultados.txt";

    saida = fopen(nomeArquivoSaidaResultados, "w");
    if (saida == NULL) {
        perror("Erro ao abrir o arquivo de saída para os resultados");
        return EXIT_FAILURE;
    }

    // Escrever os resultados no arquivo de saída
    fprintf(saida, "Menor Elemento: %d\n", menor);
    fprintf(saida, "Maior Elemento: %d\n", maior);
    fprintf(saida, "Média dos Elementos: %.2f\n", media);

    fclose(saida);

    printf("Processo concluído. Resultados salvos em %s\n", nomeArquivoSaidaResultados);

    return EXIT_SUCCESS;
}
