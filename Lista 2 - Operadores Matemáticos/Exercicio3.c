#include <stdio.h>
#include <stdlib.h>

/*Escreva um Algoritmo que leia uma temperatura em gruas centígrados e apresente a
temperatura convertida em graus Fahrenheit. A fórmula de conversão é:
F=(9*C+160)/5
sendo F é a temperatura em Fahrenheit e C é a temperatura em centígrados*/

int main () {
    float c, f;
    printf("Digite a temperatura em graus celsius:\n");
    scanf("%f", &c);
    f=(9*c+160)/5;
    printf("A temperatura em fahrenheit e: %.2f",f);
    return 0;
}
