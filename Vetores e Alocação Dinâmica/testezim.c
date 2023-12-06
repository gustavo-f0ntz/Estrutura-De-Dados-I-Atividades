#include <stdio.h>
#include <stdlib.h>

int main(void) {
    char *nome = (char*) malloc(50* sizeof(char));
    if(nome==NULL) {
        exit(1);
    }
    printf("\n Digite seu nome: \n");
    scanf("%[^\n]s", nome);
    printf("\n Seu nome e: %s \n", nome);
    free(nome);
    return 0;
}

