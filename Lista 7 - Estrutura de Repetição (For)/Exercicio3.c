#include <stdio.h>
#include <stdlib.h>

/*Faça um programa que leia um número inteiro N e depois imprima os N primeiros números naturais ímpares.*/

int main () {
    int N, cont, i=1;
    printf("Digite um numero inteiro:\n");
    scanf("%d", &N);
    for(cont=1; cont<=N; cont++, i=i+2) {
        printf("%d ", i);
    }
    return 0;
}
