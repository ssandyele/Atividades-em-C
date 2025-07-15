#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*Escreva um Algoritmo que receba dez números do usuário e imprima o quadrado de
cada número.*/

int main () {
    int leia, quad, cont = 1;
    while(cont<=10) {
        printf("Digite um numero inteiro:\n");
        scanf("%d", &leia);
        quad=leia*leia;
        printf("O quadrado e: %d\n\n", quad);
        cont++;
    }
    return 0;
}
