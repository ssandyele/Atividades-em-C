#include <stdio.h>
#include <stdlib.h>

/*Leia uma matriz de tamanho 4 × 4. Em seguida, conte e escreva na tela quantos
valores negativos ela possui.*/

int main () {
    int mat[4][4], i,j, cont=0;
    for(i=0;i<4;i++) {
        for (j=0;j<4;j++) {
            printf("Digite um numero inteiro para a posicao %dx%d: ", i, j);
            scanf("%d", &mat[i][j]);
            if (mat[i][j]<0) {
                cont++;
            }
        }
    }
    printf("\n");
    for (i=0; i<4;i++) {
        for (j=0;j<4;j++) {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
    printf("Essa matriz possui %d valores negativos!\n", cont);

    return 0;
}
