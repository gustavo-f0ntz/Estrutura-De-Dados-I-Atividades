#include <stdio.h>

int main (void) {
    int c;
    int nlinhas = 0;
    FILE * fp;
    /* abre o arquivo para leitura*/
    fp = fopen("arquivo.txt", "rt");
    if (fp == NULL) {
        printf("Nao foi possivel abrir o arquivo. \n");
        return 1;
    }
    while ((c = fgetc(fp)) != EOF) {
        if (c == '\n') {
            nlinhas++;
        }
    }
    // fecha o arquivo
    fclose(fp);
    // exibe o resultado na tela
    printf("Numero de linhas =  %d\n", nlinhas);
    return 0;


}


