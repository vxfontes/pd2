#include <stdio.h>
#include <stdlib.h>

// Dada a Matriz A = {{10, 30, 50}, {5, 15, 25}, {2, 5, 9}} e a
// Matriz B= {{5, 35, 70}, {1, 25, 30}, {1, 4, 7}}, faça um programa
// que gere a Matriz C contendo os maiores valores de cada
// posição. Mostre a Matriz C.

int main() {
    int matrizA[3][3] = {{10, 30, 50,}, {5, 15, 25,}, {2, 5, 9,}};
    int matrizB[3][3]= {{5, 35, 70,}, {1, 25, 30,}, {1, 4, 7,}}, matrizC[3][3], i, j, m, n;
    int comparandoA, comparandoB, num=3, q, r, s, t;

    for(i=0; i<num; i++){
        for (j=0; j<num; j++) {
            q = i;
            r = j;
            comparandoA = matrizA[q][r];

            for(m=0; m<num; m++) {
                for(n=0; n<num; n++) {
                    s = m;
                    t = n;

                    if(comparandoA > matrizB[s][t]) {
                        matrizC[s][t] = comparandoA;
                    } else {
                        matrizC[s][t] = matrizB[s][t];
                    }
                }
            }
        }
    }

printf("Imprimindo a matriz A: \n");
    for(i=0; i<num; i++){
        for (j=0; j<num; j++) {
            printf("%d ",matrizA[i][j]);
        }
        printf("\n");
    }
printf("\n\n\n\n");

printf("Imprimindo a matriz B: \n");
    for(i=0; i<num; i++){
        for (j=0; j<num; j++) {
            printf("%d ",matrizB[i][j]);
        }
        printf("\n");
    }

printf("\n\n\n\n");
printf("Imprimindo a matriz C: \n");
    for(i=0; i<num; i++){
        for (j=0; j<num; j++) {
            printf("%d ",matrizC[i][j]);
        }
        printf("\n");
    }

    return 0;
}