#include <stdio.h>
#include <stdlib.h>

// Na matemática, o fatorial de um número natural n
// é dado pelo produto de todos os números
// inteiros e positivos menores ou iguais a n. Por
// exemplo, o fatorial de 5 é dado por 5 * 4 * 3 * 2 *
// 1. Desenvolva um programa que calcule o fatorial
// de um número dado como entrada.

int main(){
    int num, fatorial, fat;

    printf("Digite um numero: ");
    scanf("%d", &num);

    fatorial = num;

    for (fat = 1; num > 1; num = num - 1){
        fat = fat * num;
    }

    printf("O numero %d tem como fatorial: %d\t", fatorial, fat);

    return (0);
}