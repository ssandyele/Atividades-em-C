#include <stdio.h>
#include <stdlib.h>

/*Crie um programa que contenha um array contendo cinco elementos
inteiros. Leia esse array do teclado e imprima o endereço das posições
contendo valores pares.*/

int main() {
    int n=5, par=0;
    int vet[n];
    int *p=vet;

    printf("Digite 5 valores inteiros: ");
    for(p=vet;p<vet+n;p++) {
        scanf("%d", p);
    }

    printf("\nENDERECOS DAS POSICOES DO ARRAY QUE CONTEM VALORES PARES\n");
    for(p=vet;p<vet+n;p++) {
        if(*p%2==0) {
            printf("Endereco da posicao onde esta '%d': %p\n", *p, p);
            par++;
        }
    }
    if (par==0) {
        printf("Voce nao digitou nenhum numero par :(\n");
    }
    return 0;
}