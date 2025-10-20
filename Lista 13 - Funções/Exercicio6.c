#include <stdio.h>
#include <stdlib.h>

/*Elabore um programa que lei um valor inteiro, positivo e chame uma função
que determine se o valor é primo ou não. Caso o valor seja primo a função
deverá retornar o valor 0, caso contrário o valor será -1. Ao finalizar o
programa deverá imprimir se o número é primo ou não.*/

int PRIMO (int num);

int main () {
    int N;
    do {
        printf("Digite um numero INTEIRO e POSITIVO: ");
        scanf("%d", &N);
    } while (N<0);
    printf("\nVERIFICANDO SE %d E PRIMO...\n", N);
    if (PRIMO(N)==0){
        printf("O valor e primo!\n");
    }
    if (PRIMO(N)==-1) {
        printf("O valor nao e primo.\n");
    }
    return 0;
}

int PRIMO (int num) {
    int div=0;
    for (int i=1; i<=num; i++) {
        if (num%i==0) {
            div++;
        }
    }
    if (div==2) {
        return 0;
    } else {
        return -1;
    }
}