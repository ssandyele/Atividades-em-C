#include <stdio.h>
#include <stdlib.h>

/*Criar um Algoritmo que leia o numerador e o denominador de uma fração e transforme
esses valores em um número racional.*/

int main () {
    float n, d, num;
    printf("Digite a fracao (x/y): ");
    scanf("%f/%f", &n, &d);
    printf("%.2f\n", n);
    printf("%.2f\n", d);
    num=n/d;
    printf("%.2f", num);
    return 0;
}