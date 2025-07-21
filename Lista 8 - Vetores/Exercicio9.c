#include <stdio.h>
#include <stdlib.h>

/*Faça um programa que receba do usuário dois arrays, A e B, com 10
números inteiros cada. Crie um novo array C calculando C = A − B. Mostre na
tela os dados do array C.*/

int main () {
    int A[10], B[10], C[10], i;
    printf("Digite 10 numeros inteiros para o array A:\n");
    for (i=0; i<10; i++) {
        scanf("%d", &A[i]);
    }
    printf("Digite 10 numeros inteiros para o array B:\n");
    for (i=0; i<10; i++) {
        scanf("%d", &B[i]);
    }
    printf("\nARRAY C\n");
    for(i=0; i<10; i++) {
        C[i]=A[i]-B[i];
        printf("%d ", C[i]);
    }
    printf("\n");
    return 0;
}
