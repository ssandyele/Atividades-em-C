#include <stdio.h>
#include <stdlib.h>

/*Faça um programa que leia um número inteiro positivo N e imprima todos os
números naturais de 0 até N em ordem decrescente.*/

int main () {
    int i=0, N;
    printf("Digite um numero inteiro:\n");
    scanf("%d", &N);
    for(;i<=N;N--) {
        printf("%d ", N);
    }
    return 0;
}
