#include <stdio.h>
#include <stdlib.h>

/*Dados três valores A, B e C, construa um Algoritmo, que imprima os valores de
forma ascendente (do menor para o maior).*/

int main () {
    float a, b, c, i;
    printf("Digite tres valores:\n");
    scanf("%f %f %f", &a, &b, &c);
    if (a>=b) {i=a; a=b; b=i;}
    if (a>=c) {i=a; a=c; c=i;}
    if (b>=c) {i=b; b=c; c=i;}
    printf("Valores em ordem crescente: %.2f %.2f %.2f\n", a, b, c);
    return 0;
}
