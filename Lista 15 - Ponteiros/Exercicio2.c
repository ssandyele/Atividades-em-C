#include <stdio.h>
#include <stdlib.h>

/*Escreva uma função void swap(int *a, int *b) que troque os valores
apontados por a e b. Em main, leia dois inteiros, chame swap e imprima
os valores trocados.*/

void swap (int *a, int *b) {
    int aux;
    aux=*a;
    *a=*b;
    *b=aux;
}

int main() {
    int A, B, *a, *b;
    a=&A; b=&B;
    printf("Digite um numero inteiro para a: ");
    scanf("%d", &A);
    printf("Digite outro numero inteiro para b: ");
    scanf("%d", &B);
    swap(a,b);
    printf("\n---INVERTENDO OS VALORES---");
    printf("\nValor de a: %d\nValor de b: %d\n", A, B);
    return 0;
}