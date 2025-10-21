#include <stdio.h>
#include <stdlib.h>

/*Crie uma função recursiva que retorne a média dos elementos de um vetor
de inteiros.*/

float media (int vet[], int n, int i, float soma) {
    if (i==n) {
        return soma/n;
    }
    return media (vet, n, i+1, soma+vet[i]);
}

int lerVetor (int vet[], int n) {
    if (n==0)
        return 0;
    scanf("%d", &vet[n-1]);
    lerVetor(vet, n-1);
}

int main()
{
    int n=5;
    int vet[n];
    printf("Digite 5 valores para o vetor: ");
    lerVetor(vet,n);
    printf("\nMedia do vetor: %.2f\n", media(vet,n,0,0));
    return 0;
}