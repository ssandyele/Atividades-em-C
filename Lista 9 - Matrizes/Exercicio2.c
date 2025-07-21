#include <stdio.h>
#include <stdlib.h>

/*Faça um programa que leia uma matriz de tamanho 4 × 4. Imprima na tela o
maior valor contido nessa matriz e a sua localização (linha e coluna).*/

int main () {
    int mat[4][4], i,j, maior, I, J;
    for (i=0;i<4;i++) {
        for (j=0; j<4; j++) {
            printf("Digite um numero inteiro para a posicao %dx%d: ", i, j);
            scanf("%d", &mat[i][j]);
        }
    }
    maior=mat[0][0];
    I=0;
    J=0;
    for (i=0;i<4;i++) {
        for (j=0;j<4;j++) {
            if (mat[i][j]>maior) {
                maior=mat[i][j];
                I=i;
                J=j;
            }
        }
    }

    printf("\n");
    for (i=0; i<4; i++) {
        for (j=0;j<4;j++) {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
    printf("O maior numero e: %d, localizado em %dx%d", maior, I, J);
    return 0;
}