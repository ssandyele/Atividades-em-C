#include <stdio.h>
#include <stdlib.h>

/*Escreva um Algoritmo que imprima os 100 primeiros números ímpares.    */

int main () {
    int cont = 0;
    int i = 1;
    while (cont < 100) {
        printf("%d ", i);
        i+=2;
        cont++;
    }
    return 0;
}
