#include <stdio.h>
#include <stdlib.h>

/*Faça um programa que declare uma matriz de tamanho 5 × 5. Preencha com 1 a
diagonal principal e com 0 os demais elementos. Ao final, escreva a matriz obtida
na tela.*/

int main () {
    int mat[5][5], i, j;
    for (i=0;i<5;i++) {
        for (j=0;j<5;j++) {
            if (i==j) {
                mat[i][j]=1;
            } else {
                mat[i][j]=0;
            }
        }
    }
    for (i=0;i<5;i++){
        for (j=0;j<5;j++) {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
    return 0;
}
