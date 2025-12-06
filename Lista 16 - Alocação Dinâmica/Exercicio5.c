#include <stdio.h>
#include <stdlib.h>

/*Faça um programa que leia um valor inteiro N não negativo. Se o valor de N for inválido, o
usuário deverá digitar outro até que ele seja válido (ou seja, positivo). Em seguida, leia um vetor V
contendo N posições de inteiros, em que cada valor deverá ser maior ou igual a 2. Esse vetor
deverá ser alocado dinamicamente.*/

int * aloc (int N) {
    int *p;
    p = (int *) malloc (N*sizeof(int));
    return p;
}

int * lerVet (int *vet, int N) {
    printf("\n\nDigite um numero inteiro para o vetor:\n");
    for (int i=0;i<N;i++) {
        printf("\nVET[%d] = ", i);
        scanf("%d", &vet[i]);
        while (vet[i]<2) {
            printf("Os valores devem ser maiores que 1!\n");
            scanf("%d", &vet[i]);
        }
    }
    return vet;
}

int main() {
    int N;
    do{
        printf("Digite um numero inteiro e positivo: ");
        scanf("%d", &N);
    } while (N<=0);

    int *vet = aloc(N);
    lerVet (vet, N);

    printf("\nVETOR LIDO: ");
    for (int i=0; i<N; i++) {
        printf("%d ", vet[i]);
    }
    printf("\n");
    return 0;
}