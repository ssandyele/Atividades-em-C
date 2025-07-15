#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*Criar um Algoritmo que imprima todos os números de 1 até 100, inclusive, e a média
de todos eles.*/

int main () {
    int soma, i=1;
    float media;
    while(i<=100) {
        printf("%d ", i);
        soma=soma+i;
        i++;
    }
    media=soma/100.0;
    printf("\nA media desses numeros e: %.1f", media);
    return 0;
}
