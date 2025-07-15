#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*Escreva um Algoritmo que receba oito números do usuário e imprima o logaritmo de
cada um deles na base 10.*/

int main () {
    int leia, cont = 1;
    double loga;
    while(cont<=8) {
        printf("Digite um numero inteiro:\n");
        scanf("%d", &leia);
        loga=log10(leia);
        printf("O logaritmo de %d na base 10 e: %lf\n\n", leia, loga);
        cont++;
    }
    return 0;
}
