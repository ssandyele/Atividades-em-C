#include <stdio.h>
#include <stdlib.h>

/*Construa um Algoritmo que indique se um número digitado está compreendido
entre 20 e 90 ou não (20 e 90 não estão na faixa de valores).*/

int main () {
    int num;
    printf("Digite um numero;\n");
    scanf("%d", &num);
    if (num>20 && num<90) {
        printf ("O numero esta entre 20 e 90");
    }
    else {
        printf ("O numero NAO esta entre 20 e 90");
    }
    return 0;
}
