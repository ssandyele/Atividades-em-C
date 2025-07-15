#include <stdio.h>
#include <stdlib.h>

/*Escreva um Algoritmo para determinar se um número A é divisível por outro
número B. Esses valores devem ser fornecidos pelo usuário.*/

int main () {
    int A, B;
    printf("Digite dois numeros:\n");
    scanf("%d %d", &A, &B);
    if (A%B==0) {
        printf("O numero %d e divisivel por %d", A, B);
    }
    else {
        printf("O numero %d NAO e divisivel por %d", A, B);
    }
    return 0;
}
