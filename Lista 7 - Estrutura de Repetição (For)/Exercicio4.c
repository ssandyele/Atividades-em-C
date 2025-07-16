#include <stdio.h>
#include <stdlib.h>

/*Faça um programa que determine e mostre os cinco primeiros múltiplos de 3
considerando números maiores que 0.*/

int main () {
    int N, cont;
    for(cont=1,N=3;  cont<=5; N=N+3, cont++) {
        printf("%d ", N);
    }
    return 0;
}