#include <stdio.h>
#include <stdlib.h>

/*Elaborar um Algoritmo para ler três valores inteiros e chame uma função que
receba esses valores e retorne a média dos três valores.*/

float media (float A, float B, float C);

int main () {
    float x,y,z;
    printf("Digite o primeiro valor: ");
    scanf("%f", &x);
    printf("Digite o segundo valor: ");
    scanf("%f", &y);
    printf("Digite o terceiro valor: ");
    scanf("%f", &z);

    printf("\n\nA media desses valores e: %.2f\n\n", media(x,y,z));
    return 0;
}

float media (float A, float B, float C) {
    float M;
    M=(A+B+C)/3;
    return M;
}