#include <stdio.h>
#include <stdlib.h>

/*Crie uma função que receba dois parâmetros: um vetor e um valor
do mesmo tipo do vetor. A função deverá preencher os elementos de vetor com
esse valor. Não utilize índices para percorrer o vetor, apenas aritmética de
ponteiros.*/

void preenche(int *vet, int n, int valor) {
    int *p;
    for (p = vet; p < vet + n; p++)
        *p = valor;
}

int main() {

    int n = 5;
    int vet[n];
    int valor;
    int *P=vet;
    printf("Digite um valor para preencher o vetor: ");
    scanf("%d", &valor);

    preenche(vet, n, valor);
    printf("\nVETOR PREENCHIDO: ");
    for(int i=0;i<n;i++) {
        printf("%d ", *(P+i));
    }
    printf("\n");
    return 0;
}