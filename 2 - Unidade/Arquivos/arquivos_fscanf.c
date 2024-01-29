#include <stdio.h>
#include <stdlib.h>

int main(void) {

    // Cria o arquivo: arquivo.txt no modo texto (wt) 

    FILE * fp;
    fp = fopen("arquivo.txt", "r"); // wt para criar o arquivo, rt para ler o arquivo
    char c[20];
    if (fp == NULL) {
        printf("Erro na abertura do arquivo!\n");
        exit(1);
    }
    else {
        printf("Arquivo criado!\n");
    }

    //c = fgetc(fp); usando o fgetc ele le o arquivo e armazena em c apenas o primeiro caractere.
    //fgets(c, 20, fp); // usando o fgets ele le o arquivo e armazena em c apenas os 20 primeiros caracteres.
    fscanf(fp, "%s", c); // usando o fscanf ele le o arquivo e armazena em c apenas os 20 primeiros caracteres. Igualmente ao fgets.
    printf("%s\n", c); // imprime o conteúdo do arquivo, %s para string e %c para caractere.

    if(fclose(fp) == 0) { // fecha o arquivo e depois verifica se deu certo, pois o fclose retorna 0 se deu certo e -1 se deu erro
        printf("Arquivo fechado!\n");
    }
    else {
        printf("Erro ao fechar o arquivo!\n");
    }
    return 0;
}