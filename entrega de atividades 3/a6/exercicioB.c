#include <stdio.h>
#include <stdlib.h>

// Desenvolva um programa em C que declare duas
// variáveis do tipo float e duas do tipo ponteiro de
// float apontando para essas variáveis. Utilizando
// ponteiros, o programa deve ler dois números para
// essas variáveis e os imprimir, realizando as quatro
// operações básicas de matemática com esses
// números.

int main() {

    float f1, f2, soma, sub, mult, div;
    float *pont1, *pont2;

    printf("Escreva um numero real: ");
    scanf("%f", &f1);
    printf("Escreva outro numero real: ");
    scanf("%f", &f2);

    pont1 = &f1;
    pont2 = &f2;

    soma = f1 + f2;
    sub = f1 - f2;
    mult = f1 * f2;
    div = f1 / f2;

    printf("\n\nValor dos ponteiros: %f e %f", *pont1, *pont2);
    printf("\nValores: \n\t soma: %f \n\t subtracao: %f \n\t multiplicacao: %f \n\t divisao: %f", soma, sub, mult, div);

    return 0;
}
