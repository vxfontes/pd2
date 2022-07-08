#include <stdio.h>
#include <stdlib.h>

// Faça programa que leia uma matriz 4 x 4 com valores reais.
// - Imprima a soma de todos os elementos das colunas
//      ímpares.
// - Imprima a media aritmética dos elementos das
//      colunas pares.
// - Imprima os resultados

int main() {
    int num = 4, matriz[4][4], i, j, m, n;
    float media, somaImpar=0, somaPar=0, numPar=0;

    for (i = 0; i < num; i++) {
        for (j = 1; j <= num; j++) {
            printf("Digite um numero: ");
            scanf("%d",&matriz[i][j]);

            if (j % 2 != 0) {
                somaImpar = somaImpar + matriz[i][j];
            } else {
                somaPar = somaPar + matriz[i][j];
                numPar++;
            }
        }
    }

    printf("Matriz digitada: \n");

    for (i = 0; i < num; i++) {
        for (j = 0; j < num; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    media = somaPar / numPar;
    printf("\n\nValores somados das colunas impares: %f", somaImpar);
    printf("\nValor da media das colunas pares: %f", media);

    return 0;
}
