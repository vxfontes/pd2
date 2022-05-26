#include <stdio.h>
#include <stdlib.h>

// Faça um programa em que a pessoa informe o rendimento
// total recebido ao longo do ano de 2020 e o programa calcule a
// média mensal recebida. Com base nessa média ele calcule
// quanto a pessoa deve pagar de imposto de renda do ano com
// base na tabela a seguir:

int main() {
    float rendTotal, media, imposto, percent;

    printf("Rendimento total recebido ao longo de 2020: ");
    scanf("%f", &rendTotal);

    media = rendTotal / 12;

    if(media >= 1903.98 && media < 2826.65) {
        percent = 0.075;
    } else if(media >= 2826.65 && media < 3751.05) {
        percent = 0.15;
    } else if(media >= 3751.05 && media < 4664.68) {
        percent = 0.225;
    } else if(media >= 4664.68) {
        percent = 0.275;
    } else {
        percent = 0;
    }

    imposto = rendTotal * percent;

    printf("\n O imposto a ser pago anualmente eh: %2.2f sendo %3.3f porcento", imposto, percent);

    return (0);
}