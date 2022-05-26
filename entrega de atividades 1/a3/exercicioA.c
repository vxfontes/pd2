#include <stdio.h>
#include <stdlib.h>

// Faça um programa que:
// - Solicite os valores para o preenchimento de dois
// vetores sendo eles vetor1 e vetor2, cada um com
// cinco posições;
// - Atribua a um vetor resultado à soma do vetor1 com o
// vetor2 (a primeira posição do vetor1 será somada a
// primeira posição do vetor2 e o resultado será
// atribuído a primeira posição do vetor resultado e
// assim sucessivamente) ;
// - Apresente os valores do vetor resultado

int main() {
    int i=5, j, vetor1[i], vetor2[i], vetorResul[i];

    for (j=0; j<5; j++) {
        printf("Digite o valor %d do vetor 1: ", j+1);
        scanf("%d",&vetor1[j]);
    }

    for (j=0; j<5; j++) {
        printf("Digite o valor %d do vetor 2: ", j+1);
        scanf("%d",&vetor2[j]);
    }

    for (j=0; j<5; j++) {
        vetorResul[j] = vetor1[j] + vetor2[j];
    }

    printf("\nA soma dos vetores 1 e 2 eh: \n");
    for (j=0; j<5; j++) {
        printf(" %d ", vetorResul[j]);
    }

    return 0;
}