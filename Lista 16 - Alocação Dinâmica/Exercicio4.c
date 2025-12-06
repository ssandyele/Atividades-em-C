#include <stdio.h>
#include <stdlib.h>

/*Elabore um programa que leia do usuário o tamanho de um vetor a ser lido. Em seguida, faça a
alocação dinâmica desse vetor. Por fim, leia o vetor do usuário e o imprima.*/

int * aloc (int n) {
    int *p;
    p = (int *) malloc (n*sizeof(int));
    return p;
}

int * lerVet (int *vet, int tam) {
    printf("Digite %d numeros inteiros para o vetor: ", tam);
    for (int i=0;i<tam;i++) {
        scanf("%d", &vet[i]);
    }
    return vet;
}

void escrevaVet(int *vet, int n) {
    printf("\nVetor lido: ");
    for (int i=0;i<n;i++) {
        printf("%d ", vet[i]);
    }
    printf("\n");
}

int main() {
    int n;
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &n);

    int *vet= aloc(n);
    lerVet(vet, n);
    escrevaVet(vet,n);
    free(vet);
    return 0;
}