// #include <stdio.h>

// Definindo vetor normalmente :


// int main (void) {
//     int vetor[3] = {2,4,6};
//     return 0;
// }


#include <stdio.h>
#include <stdlib.h>

int main (void) {
    int *vetor = malloc(3*sizeof(int)); // malloc é para alocar dinamicamente
    // esse 3 significa 3 inteiros, que no caso em bytes são 12 bytes


    if(vetor == NULL) { // se o ponteiro for nulo
        printf("erro na alocação de memória."); // imprime o erro
        exit(1); // aqui é para encerrar o programa

    }
    free(vetor); // funcao para liberar a memoria
    return 0; 


}


 //Declaração de vetores dinamicamente

int (*vetor) = (int *) malloc(tamanho * sizeof(int)); 

/*
 essa estrutura serve para declarar vetores dinamicamente
 esse (int *) é para declarar o ponteiro para um inteiro especificando o tipo de ponteiro para alocar dinamicamente

*/

#include <stdio.h>
#include <stdlib.h>

int main (void) {
    int contador;
    int tamanho = 5;
    int *vetor = (int*) malloc(tamanho * sizeof(int));

    if(vetor == NULL) {
        printf("erro na alocação de memória.");
        exit(1); // aborta o programa
    }
    else {
        printf("Alocado");
        
    }

    // Ler os dados do vetor
    printf("Insira os dados do vetor: ");
    for (contador=0; contador < tamanho; contador++) {
        scanf("%d", &vetor[contador]);
    }
    free(vetor);
    return 0;

}