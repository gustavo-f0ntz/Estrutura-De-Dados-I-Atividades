
#include <stdio.h>
#include <math.h>

void calcula_hexagono(float l, float *area, float *perimetro) {
    *area = (3 * sqrt(3) * pow(l, 2)) / 2;
    *perimetro = 6 * l;
}

int main() {
    float l, area, perimetro;

    printf("DIGITE O COMPRIMENTO DO LADO DO HEXAGONO: ");
    scanf("%f", &l);

    calcula_hexagono(l, &area, &perimetro);

    printf("AREA: %.2f\n", area);
    printf("PERIMETRO: %.2f\n", perimetro);

    return 0;
}

