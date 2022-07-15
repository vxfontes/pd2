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
    int matriz[n][n], i, j, quadMagic, somaLinha[n], somaCol[n], somaDiagonal = 0, somaDiagonalSec = 0, soma = 0, igual = 0;

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

    for (i = 3-1; i >=0; i--) {
        somaDiagonalSec += matriz[i][(3-1)-i];
    }
    
    printf("\n");

    for (i = 0; i < n; i++) {
        soma = 0;
        for (j = 0; j < n; j++) {
            soma += matriz[i][j];
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
        somaLinha[i] = soma;
    }

    for (j = 0; j < n; j++) {
        soma = 0;
        for (i = 0; i < n; i++) {
            soma += matriz[i][j];
        }
        printf("\n");
        somaCol[j] = soma;
    }

    soma = somaDiagonal;
    for (i = 0; i < n; i++) {
        if(soma == somaLinha[i]) {
            if (soma == somaCol[i]) {
                if(soma == somaDiagonalSec) {
                    igual = 0;
                } else {
                    igual = 1;
                }
            } else {
                igual = 1;
            }
        } else {
            igual = 1;
        }
    }

    if(igual == 0) {
        printf("\nEh um quadrado magico cujas somas resultam em: %d ", igual);
    } else {
        printf("Nao eh um quadrado magico");
    }

    return 0;
}