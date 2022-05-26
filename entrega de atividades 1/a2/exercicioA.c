#include <stdio.h>
#include <stdlib.h>

// Faça um programa que leia cinco valores reais e
// imprima o quadrado de cada um deles. Ao fim,
// imprima também o somatório dos cinco
// quadrados.

int main(){
    int i;
    float val, quad, soma = 0;

    for (i = 0; i < 5; i++){
        printf("\nDigite o valor real %d: ", i + 1);
        scanf("%f", &val);

        quad = val * val;
        soma = soma + quad;

        printf("O quadrado do numero %d eh: %2.2f", i + 1,quad);
    }

    printf("\n\n A soma dos quadrados eh: %2.2f", soma);

    return (0);
}