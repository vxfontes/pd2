#include <stdio.h>
#include <stdlib.h>

// Dizemos que uma matriz quadrada inteira é
// um quadrado mágico se a soma dos elementos de
// cada linha, a soma dos elementos de cada coluna e
// a soma dos elementos das diagonais principal e
// secundária são todas iguais.
// Dada uma matriz quadrada Anxn , verificar se A é um
// quadrado mágico.
const int n = 3;

int main() {
    int matriz[n][n], i, j, quadMagic, somaLinha = 0, somaCol = 0, somaDiagonal = 0;

    printf("Digite os valores da matriz magica: ");
    printf("Caso deseje o modelo de matriz magica digite: (8 0 7) (4 5 6) (3 10 2) \n\n");

    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("Digite um numero: ");
            scanf("%d",&matriz[i][j]);

            if (i == j) {
                somaDiagonal = somaDiagonal + matriz[i][j];
            } 
        }
    }
    
    printf("\n");

    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}