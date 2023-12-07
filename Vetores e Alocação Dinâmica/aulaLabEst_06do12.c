#include <stdio.h>
#include <stdlib.h>

// int main (void) {

// float * vetor = (float*) malloc(100*sizeof(float));
// if (vetor == NULL) {
// exit(1);

// }
// free(vetor);
// return 0;

// }




// Crie uma função que pegue um vetor e pegue a media dele e retorne essa media

// int main (void) {

// float media( int tamanho, int *vetor) {
//     int soma = 0;
//     int contador;

//     for (contador = 0; contador < tamanho; contador++) {
//         soma = vetor[contador] + soma;

//     }
//     return (soma / tamanho);

// }
// }


// Alocando Matrizes dinamicamente


#include <stdio.h>
#include <stdlib.h>

int main() {
    int linhas = 3, colunas = 3, i, j;

    // alocando vetor de ponteiros
    int **matriz = (int**) malloc(linhas* sizeof(int*));

    // alocando cada linha da matriz
    for (i = 0; i < linhas; i++) {
        matriz[i] = (int*) malloc(colunas * sizeof(int));

    }

    for (i = 0; i < linhas; )
}