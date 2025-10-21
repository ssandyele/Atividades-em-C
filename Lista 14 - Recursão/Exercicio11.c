#include <stdio.h>
#include <stdlib.h>

/*Escreva uma função recursiva que receba um valor inteiro em base decimal
e o imprima em base binária.*/

    int binario (int n) {
        if (n==0) {
            return 0;
        }
        binario(n/2);
        printf("%d", n%2);
    }

    int main () {
        int n;
        printf("Digite um valor inteiro: ");
        scanf("%d", &n);
        printf("\n%d em Binario: ", n);
        binario(n);
        printf("\n");
        return 0;
    }