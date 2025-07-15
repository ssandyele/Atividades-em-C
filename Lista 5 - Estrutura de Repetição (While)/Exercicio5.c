#include <stdio.h>
#include <stdlib.h>

/*Escreva um Algoritmo que imprima todos os números inteiros de 200 a 100 (em
ordem decrescente).*/

int main () {
    int i = 200;
    while (i>=100) {
        printf("%d ", i);
        i--;
    }

    return 0;
}
