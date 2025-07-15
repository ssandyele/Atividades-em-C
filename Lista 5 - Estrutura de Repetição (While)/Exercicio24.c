#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*Escreva um Algoritmo que leia 200 números inteiros e imprima quantos são pares e
quantos são ímpares.*/

int main () {
    int cont=1, leia, par=0, imp=0;
    printf("Digite 200 numeros:\n");
    while(cont<=200) {
        scanf("%d", &leia);
        if (leia%2==1) {
            imp++;
        } else {
            par++;
        }
        cont++;
    }
    printf("Numeros pares: %d\nNumeros impares: %d\n", par, imp);
    return 0;
}
