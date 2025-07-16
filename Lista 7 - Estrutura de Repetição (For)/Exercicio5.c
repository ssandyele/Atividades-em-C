#include <stdio.h>
#include <stdlib.h>

/*Faça um programa que calcule e mostre a soma dos 50 primeiros números pares.*/

int main () {
    int soma, N, cont;
    printf("50 primeiros numeros pares: ");
    for(soma=0, cont=1, N=2; cont<=50; cont++, N=N+2) {
        soma=soma+N;
        printf("%d ", N);
    }
    printf("\n\nSoma: %d\n", soma);
    return 0;
}
