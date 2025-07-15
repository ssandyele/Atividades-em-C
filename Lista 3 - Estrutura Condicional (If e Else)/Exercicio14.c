#include <stdio.h>
#include <stdlib.h>

/*Construa um Algoritmo que dado quatro valores, A, B, C e D, o Algoritmo
imprima o maior e o menor valor.*/

int main () {
    int A, B, C, D, maior, menor;
    printf("Digite quatro numeros:\n");
    scanf("%d %d %d %d", &A, &B, &C, &D);
    maior = menor = A;
    if (B > maior) maior = B;
    if (C > maior) maior = C;
    if (D > maior) maior = D;
    if (B < menor) menor = B;
    if (C < menor) menor = C;
    if (D < menor) menor = D;
    printf("O maior valor e: %d\n", maior);
    printf("O menor valor e: %d\n", menor);
    return 0;
}
