#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*Escreva um Algoritmo que receba dez números do usuário e imprima a metade de
cada número.*/

int main () {
    int leia, cont = 1;
    float met;
    while(cont<=10) {
        printf("Digite um numero inteiro:\n");
        scanf("%d", &leia);
        met=leia/2.0;
        printf("A metade e: %.1f\n\n", met);
        cont++;
    }
    return 0;
}
