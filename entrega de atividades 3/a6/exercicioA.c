#include <stdlib.h>
#include <stdio.h>

// Escreva um programa que declare uma variável
// do tipo inteiro, uma real e um char, e que tenhamos
// ponteiros para inteiro, real, e char. Associe as
// variáveis aos ponteiros.
// O programa deve permitir que se modifique os
// valores de cada variável utilizando ponteiros. Deve-
// se apresentar na tela os valores das variáveis antes
// e após a modificação.

int main() {
    int *inteiro;
    float r;
    char c;

    float *real;
    char *caract;

    printf("Digite um inteiro: ");
    scanf("%d", &*inteiro);
    printf("Digite um numero real: ");
    scanf("%f", &r);
    fflush(stdin);
    printf("Digite um caractere: ");
    scanf("%c", &c);

    real = &r;
    caract = &c;

    printf("\n\nInteiro: %d", *inteiro);
    printf("\nReal: %f", *real);
    printf("\nCaractere: %c", *caract);

    return 0;
}