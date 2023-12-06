#include <stdio.h>
#include <stdlib.h>

int main (void) {
    int contador;
    int tamanho = 5;
    int *vetor = (int*) malloc(tamanho * sizeof(int));

    if(vetor == NULL) {
        printf("erro na alocação de memória. \n");
        exit(1); // aborta o programa
    }
    else {
        printf("Alocado\n");
        
    }

    // Ler os dados do vetor
    printf("Insira os dados do vetor: \n");
    for (contador=0; contador < tamanho; contador++) {
        scanf("%d", &vetor[contador]);
        printf("vetor[%d] = %d\n", contador, vetor[contador]);
    }
    free(vetor);
    return 0;

}