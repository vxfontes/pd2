#include <stdio.h>
#include <stdlib.h>

// Faça um programa que fique em um laço
// solicitando a digitação de números inteiros e só
// pare de solicitar a digitação de novos números
// quando o usuário informar o número 0. Quando o
// número 0 for informado, o programa deve exibir a
// quantidade de números digitados, a quantidade de
// números pares, a quantidade de números ímpares
// e a média

int main() {
    int numero, div, par=0, impar=0, soma=0, quant=0;
    float media;

    do {
        printf("\nDigite um numero: ");
        scanf("%d", &numero);

        div = numero % 2;
        quant++;
        if(div == 0){
            par ++;
        } else {
            impar++;
        }

        soma = soma + numero;
    } while(numero != 0);

    // descontar o erro causado pela contagem do 0
    quant--;
    impar--;
    
    media = soma / quant;

    printf("\n%d numeros foi digitados\n",quant);
    printf("Foram digitados %d numeros pares e %d numeros impares", par, impar);
    printf("\n A media dos numeros eh: %2.2f", media);

    return 0;
}