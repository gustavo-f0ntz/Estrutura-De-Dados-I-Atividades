#include <stdio.h>
#include <stdlib.h>

int main() {
    int N, i, mulheres_gostaram = 0, homens_nao_gostaram = 0, total_mulheres = 0, total_homens = 0;
    char genero, opiniao;

    printf("Digite o numero de pessoas entrevistadas: ");
    scanf("%d", &N);

    char *generos = malloc(N * sizeof(char));
    char *opinioes = malloc(N * sizeof(char));

    if(generos == NULL || opinioes == NULL) {
        printf("Erro na alocacao de memoria.\n");
        return 1;
    }

    for(i = 0; i < N; i++) {
        printf("Digite o gênero (M/F) e a opinião (G/N) da pessoa %d: ", i+1);
        scanf(" %c %c", &genero, &opiniao);

        generos[i] = genero;
        opinioes[i] = opiniao;

        if(genero == 'F' || genero == 'f') {
            total_mulheres++;
            if(opiniao == 'G' || opiniao == 'g') {
                mulheres_gostaram++;
            }
        } else if(genero == 'M' || genero == 'm') {
            total_homens++;
            if(opiniao == 'N' || opiniao == 'n') {
                homens_nao_gostaram++;
            }
        }
    }

    printf("Porcentagem de mulheres que gostaram do produto: %.2f%%\n", ((float)mulheres_gostaram / total_mulheres) * 100);
    printf("Porcentagem de homens que não gostaram do produto: %.2f%%\n", ((float)homens_nao_gostaram / total_homens) * 100);

    free(generos);
    free(opinioes);

    return 0;
}