#include <stdio.h>
#include <stdlib.h>

/*Faça um programa que leia uma matriz de tamanho 3 × 3. Imprima na tela o
menor valor contido nessa matriz.*/

int main () {
    int mat [3] [3], i, j, menor;
    for (i=0; i<3; i++) {
        for (j=0; j<3; j++) {
            printf("Digite um numero inteiro para a posicao %dx%d: ", i, j);
            scanf("%d", &mat[i][j]);
        }
    }
    menor=mat[0][0];
    for(i=0;i<3;i++) {
        for (j=0;j<3;j++) {
            if (mat[i][j]<menor) {
                menor=mat[i][j];
            }
        }
    }
    printf("\n");
    for (i=0; i<3; i++) {
        for (j=0; j<3; j++) {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
    printf("Menor valor da matriz: %d\n", menor);
    return 0;
}
