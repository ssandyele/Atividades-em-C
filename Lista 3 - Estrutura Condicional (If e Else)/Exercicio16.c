#include <stdio.h>
#include <stdlib.h>

/*Dados três valores A, B e C, construa um Algoritmo, que imprima os valores de
forma descendente (do maior para o menor).*/

int main () {
    float a, b, c, i;
    printf("Digite tres valores:\n");
    scanf("%f %f %f", &a, &b, &c);
    if (a<=b) {i=a; a=b; b=i;}
    if (a<=c) {i=a; a=c; c=i;}
    if (b<=c) {i=b; b=c; c=i;}
    printf("Valores em ordem decrescente: %.2f %.2f %.2f\n", a, b, c);
    return 0;
}
