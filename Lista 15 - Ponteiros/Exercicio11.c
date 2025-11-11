#include <stdio.h>
#include <stdlib.h>

/*Crie um programa que contenha uma matriz de float contendo três
linhas e três colunas. Imprima o endereço de cada posição dessa matriz.*/

int main() {
    float mat[3][3];
    float *p;
    printf("--- ENDERECOS DE CADA POSICAO DA MATRIZ CRIADA ---\n");
    for (p=&mat[0][0];p < &mat[0][0] + 9;p++) {
        printf("%p\n", p);
    }
    return 0;
}