#include <stdio.h>
#include <stdlib.h>

// Faça um programa que leia o valor do salário bruto de um
// funcionário informado pelo usuário. Caso o salário seja
// menor ou igual a R$ 1.000,00, o programa deve informar que o
// salario será reajustado em 25% e deve calcular e apresentar o
// novo valor de salario

int main() {
    float salBruto, salNovo;

    printf("Qual o valor do salario bruto do funcionario?\t");
    scanf("%f",&salBruto);

    if(salBruto <= 1000) {
        printf("o salario sera reajustado em 25 porcento ");
        salNovo = salBruto + salBruto*0.25;
    } else {
        salNovo = salBruto;
    }

    printf("\n\n O salario sera: %2.2f", salNovo);

    return (0);
}