#include <stdio.h>
#include <stdlib.h>

// Faça um programa que solicite a digitação e
// armazene 10 números reais em um vetor. Depois o
// programa deve ficar disponível para o usuário digitar o
// valor do índice para que seja exibido o número
// armazenado no índice solicitado. Para encerrar o
// programa, o usuário deve informar um índice inválido.

int main() {
    int i=10, j, posicao;
    float vetor[i];

    printf("Iniciando a adicao de numeros no vetor");

    for(j=0; j<i; j++){
        printf("\nDigite um numero para a posicao %d: ", j+1);
        scanf("%f",&vetor[j]);
    }

    while(posicao>=0 && posicao<10){
        printf("\nQual o valor da posicao desejada?\t");
        scanf("%d",&posicao);
        posicao--;

        printf("Valor: %.0f",vetor[posicao]);
    }

    printf("\n\n\nPrograma foi encerrado");

    return 0;
}