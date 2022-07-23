#include <stdio.h>
#include <stdlib.h>

// Desenvolva um programa em C que declare três
// variáveis do tipo inteiro e três do tipo ponteiro de
// inteiro apontando para essas variáveis. Utilizando
// ponteiros, leia três números e os imprima em ordem
// crescente. O programa deve apresentar também o
// endereço de memória desses números.


int main() {
    int valor1, valor2, valor3, *a, *b, *c;

    printf("Digite um numero: ");
    scanf("%d", &valor1);
    printf("Digite outro numero: ");
    scanf("%d", &valor2);
    printf("Digite outro numero: ");
    scanf("%d", &valor3);

    a = &valor1;
    b = &valor2;
    c = &valor3;

    if (*a > *b)                     
        if (*b > *c) printf("\nNumero 1: %d\tNumero 2: %d\tNumero 3: %d\n", *a, *b, *c);
        else                             
            if (*a > *c) printf("\nNumero 1: %d\tNumero 2: %d\tNumero 3: %d\n", *a, *c, *b); 
            else printf("\nNumero 1: %d\tNumero 2: %d\tNumero 3: %d\n", *c, *a, *b);     
    else                                    
        if (*b > *c)                                       
            if (*a > *c) printf("\nNumero 1: %d\tNumero 2: %d\tNumero 3: %d\n", *b, *a, *c);  
            else printf("\nNumero 1: %d\tNumero 2: %d\tNumero 3: %d\n", *b, *c, *a);    
        else printf("\nNumero 1: %d\tNumero 2: %d\tNumero 3: %d\n", *c , *b, *a);          
    
    return 0;
}