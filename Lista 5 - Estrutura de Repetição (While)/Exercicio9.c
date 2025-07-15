#include <stdio.h>
#include <stdlib.h>

/*Escreva um Algoritmo que imprima o quadrado dos números no intervalo fechado de 1
a 20.*/

int main () {
    int quad, i = 1;
    while (i<=20){
        quad=i*i;
        printf("%d ", quad);
        i++;
    }
    return 0;
}
