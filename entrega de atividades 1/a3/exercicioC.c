#include <stdio.h>
#include <stdlib.h>

// Faça um programa que solicite a digitação do nome
// do aluno, de 4 notas do mesmo e calcule a média das
// notas. Caso a média seja maior ou igual a 7, imprima
// uma mensagem contendo o nome do aluno e a palavra
// “Aprovado”. Caso contrário, a mensagem deve conter o
// nome do aluno e a palavra “Reprovado”.

int main() {
    char nome[40];
    float soma=0, media, nota;
    int i;

    printf("Qual o nome do aluno? ");
    gets(nome);

    for(i=0; i<4; i++){
        printf("Digite a nota %d: ", i+1);
        scanf("%f",&nota);

        soma = soma + nota;
    }

    media = soma / 4;
    if(media>=7) {
        printf("\n %s foi APROVADO!", nome);
    } else {
        printf("\n %s foi reprovado :(", nome);
    }
    
    return 0;
}