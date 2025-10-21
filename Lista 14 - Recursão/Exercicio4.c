#include <stdio.h>
#include <stdlib.h>

/*Crie uma função recursiva que retorne a soma dos elementos de um vetor
de inteiros.*/

int SomaVetor (int vet[], int n) {
    if (n==0) {
        return 0;
    }
    return vet[n-1] + SomaVetor(vet, n-1);
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
    printf("Digite 5 valores INTEIROS para o vetor:\n");
    lerVetor(vet,n);
    printf("\nSoma do vetor: %d\n", SomaVetor(vet, n));
    return 0;
}