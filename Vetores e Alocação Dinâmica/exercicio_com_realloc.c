
#include <stdio.h> // biblioteca de entrada e saida
#include <stdlib.h> // biblioteca para alocar dinamicamente

int main(void) {
    int tamanho = 5, novo_tamanho; 
    int *vetor = (int *) malloc(tamanho * sizeof(int)); // aloca dinamicamente
    printf("\n Entre com o novo tamanho do vetor: \n "); // entrada de dados
    scanf("%d", &novo_tamanho); // leitura de um novo tamanho de vetor
    vetor = (int *) realloc(vetor, novo_tamanho * sizeof(int)); // realoca dinamicamente
    if (vetor = NULL) { 
        printf("\n Erro na alocação de memoria. \n");
        exit(1); // aborta o programa
    }
    free (vetor); // libera a memoria
    return 0;

}