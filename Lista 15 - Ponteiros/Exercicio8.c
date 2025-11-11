#include <stdio.h>
#include <stdlib.h>

/*Crie uma função que receba como parâmetro um vetor e o imprima.
Não utilize índices para percorrer o vetor, apenas aritmética de ponteiros.*/

void imprime(int *vet, int N) {
    int *P;
    for (P=vet;P<vet+N;P++) {
        printf("%d ", *P);
    }
}

int main() {
    int N=5;
    int vet[N];
    int *p=vet;

    printf("Digite cinco valores inteiros: ");
    for(p=vet;p<vet+N;p++) {
        scanf("%d", p);
    }

    printf("\nConteudo do vetor: ");
    imprime(vet,N);
    printf("\n");

    return 0;
}