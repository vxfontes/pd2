#include <stdio.h>
#include <stdlib.h>

// Faça um programa que leia o tamanho de um
// vetor de inteiros e reserve dinamicamente memória
// para esse vetor. Em seguida, leia os elementos
// desse vetor, imprima o vetor lido e mostre o
// resultado da soma dos números ímpares presentes
// no vetor.

int main() {

    int tamanho, *vetor, i, soma = 0;

    printf("Digite o tamanho do vetor: ");
    scanf("%d", &tamanho);

    vetor = (int *) malloc(tamanho * sizeof(int));

    if(vetor == NULL) {
        printf("ERRO: sem memoria");
        exit(1);
    } else {
        for(i=0; i < tamanho; i++) {
            printf("Digite p[%d]: ", i);
            scanf("%d", &vetor[i]);

            if(vetor[i] % 2 != 0) {
                soma += vetor[i];
            }
        }

        for(i=0; i < tamanho; i++) {
            printf("p[%d] = %d ", i+1, *(vetor+i));
        }

        printf("\nValor da soma: %d", soma);
    }

    return 0;
}