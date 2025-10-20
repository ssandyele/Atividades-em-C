#include <stdio.h>
#include <stdlib.h>

/*Elabore um programa que leia um valor inteiro, positivo e chame uma
função que receba esse valor e retorne o fatorial dele. Ao finalizar o
programa deverá imprimir esse valor.*/

int FATORIAL (int num);

int main () {
    int N;
    do {
        printf("Digite um numero INTEIRO e POSITIVO: ");
        scanf("%d", &N);
    } while (N<=0);
    printf("\nFatorial de %d: %d\n", N, FATORIAL(N));
    return 0;
}

int FATORIAL (int num) {
    int i, fat;
    fat=num;
    for (i=num-1;i>=1;i--){
        fat=fat*i;
    }
    return fat;
}