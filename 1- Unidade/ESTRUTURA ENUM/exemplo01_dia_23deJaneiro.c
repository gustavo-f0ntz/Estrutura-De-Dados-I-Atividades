#include <stdio.h>

typedef enum  bool {
    true,
    false
} Bool;

int main (void) {
    Bool resposta;
    printf ("Voce gosta de algoritmos? \n 0 - True \n 1 - False \n");
    scanf("%u", &resposta);

    if (resposta == true) {
        printf("Boa escolha! \n");
    }
    else if  (resposta == false) {
        printf("Que pena! \n");
    }

    return 0;
}