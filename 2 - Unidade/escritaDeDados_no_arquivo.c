#include <stdio.h>
#include <stdlib.h>

int main(void) {

    // Cria o arquivo: arquivo.txt no modo (w) write

    FILE * fp;
    fp = fopen("arquivo.txt", "w"); // wt para criar o arquivo, rt para ler o arquivo
    if (fp == NULL) {
        printf("Erro na abertura do arquivo!\n");
        exit(1);
    }
    else {
        printf("Arquivo criado!\n");
    }

    // fputc('A', fp); // ele escreve uma unica letra, 'A' dentro do arquivo.
    // fputs("Hello world!", fp); // ele escreve uma string, "Hello world!" dentro do arquivo.
    fprintf(fp, "Aula so da boa!\n"); // ele escreve uma string, "Hello world!" dentro do arquivo.
     
    if(fclose(fp) == 0) { 
        printf("Arquivo fechado!\n");
    }
    else {
        printf("Erro ao fechar o arquivo!\n");
    }
    return 0;
}