#include <stdio.h>
#include <stdlib.h>

/*Escreva um Algoritmo que imprima todos os números múltiplos de 5, no intervalo
fechado de 1 a 500.*/

int main () {
    int i = 1;
    while (i<=500) {
        if (i%5==0) {
            printf("%d ", i);
        }
        i++;
    }
    return 0;
}
