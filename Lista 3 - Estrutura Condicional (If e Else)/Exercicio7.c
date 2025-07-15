#include <stdio.h>
#include <stdlib.h>

/*Construa um Algoritmo que imprima qual o menor e qual o maior valor de dois
números A e B, lidos através do teclado.*/

int main () {
    int A, B;
    printf("Digite dois numeros diferentes:\n");
    scanf("%d %d", &A, &B);
    if (A>B) {
        printf("Maior valor: %d\nMenor valor: %d\n", A, B);
    }
    else {
       printf("Maior valor: %d\nMenor valor: %d\n", B, A);
    }
    return 0;
}
