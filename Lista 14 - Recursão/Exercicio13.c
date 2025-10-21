#include <stdio.h>
#include <stdlib.h>

/*Crie uma função recursiva que retorne o menor elemento em um vetor.*/

int menor(int vet[], int n) {
    if (n==0)
        return vet[n];
    int MENOR = menor(vet, n - 1);
    if (vet[n - 1] < MENOR)
        return vet[n - 1];
    else
        return MENOR;
}

void lerVetor (int vet[], int n) {
    if (n==0)
        return;
    scanf("%d", &vet[n-1]);
    lerVetor (vet, n-1);
}

int main () {
    int n=5;
    int vet[n];
    printf("Digite 5 valores inteiros: ");
    lerVetor(vet,n);
    printf("\nMenor valor digitado: %d\n", menor(vet,n));
    return 0;
}