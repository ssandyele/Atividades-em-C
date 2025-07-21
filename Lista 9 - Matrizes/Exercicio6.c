#include <stdio.h>
#include <stdlib.h>

/*Leia uma matriz de tamanho 3 × 3. Em seguida, imprima a soma dos valores
contidos em sua diagonal principal.*/

int main () {
    int mat[3][3], i, j, S=0;
    for (i=0;i<3;i++){
        for (j=0;j<3;j++){
            printf("Digite um numero inteiro para a posicao %dx%d: ", i,j);
            scanf("%d", &mat[i][j]);
            if (i==j) {
                S=S+mat[i][j];
            }
        }
    }
    printf("\n");
    for (i=0;i<3;i++) {
        for (j=0;j<3;j++) {
            printf("%d ",mat[i][j]);
        }
        printf("\n");
    }
    printf("\nA soma dos valores da diagonal principal e: %d\n", S);
    return 0;
}
