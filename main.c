#include <stdio.h>
#include <math.h>

void sommReciprocoQuadrato(int nTotale , float *sumReciprocoQuadrato);

int main(void) {

    int nTotale;
    float sumReciprocoQuadrato;

    printf("Inserisci il numero totale: \n");
    scanf("%d", &nTotale);

    sommReciprocoQuadrato(nTotale, &sumReciprocoQuadrato);
    printf("SommReciprocoQuadrato: [%2.2f]\n", sumReciprocoQuadrato);

    return 0;
}

void sommReciprocoQuadrato(int nTotale , float *sumReciprocoQuadrato) {
    for (int i = 0; i < nTotale; i++) {
        float d = pow( i + 1.0 , 2);
        *sumReciprocoQuadrato = *sumReciprocoQuadrato + 1/d;
    }
}
