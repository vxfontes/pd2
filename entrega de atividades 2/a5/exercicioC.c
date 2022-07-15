#include <stdio.h>
#include <stdlib.h>

// Leia uma matriz de 3 x 3 elementos. Calcule a
// soma dos elementos que estão na diagonal
// secundária.

int main() {
    int matriz[3][3], i, j, soma = 0;

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("Digite um numero: ");
            scanf("%d",&matriz[i][j]);
        }
    }
    
    printf("\n");

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    for (i = 3-1; i >=0; i--) {
        soma += matriz[i][(3-1)-i];
    }

    printf("A soma da diagonal secundaria eh: %d", soma);
    return 0;
}