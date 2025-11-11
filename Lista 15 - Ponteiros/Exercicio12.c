#include <stdio.h>
#include <stdlib.h>

/*Crie um programa que contenha um array de inteiros contendo cinco
elementos. Utilizando apenas aritmética de ponteiros, leia esse array do
teclado e imprima o dobro de cada valor lido.*/

int main() {
    int n=5;
    int vet[n];
    int *p=vet;

    printf("Digite 5 valores inteiros: ");
    for(p=vet;p<vet+n;p++) {
        scanf("%d", p);
    }

    printf("\nCalculando o dobro de cada valor...\n");
    for (p=vet;p<vet+n;p++) {
        printf("Dobro de %d: %d\n", *p, 2 * (*p));
    }
    return 0;
}