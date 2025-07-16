#include <stdio.h>
#include <stdlib.h>

/*Faça um programa que leia um número inteiro positivo N e imprima todos os
números naturais de 0 até N em ordem crescente.*/

int main () {
    int i, N;
    printf("Digite um numero inteiro:\n");
    scanf("%d", &N);
    for(i=0;i<=N;i++) {
        printf("%d ", i);
    }
    return 0;
}
