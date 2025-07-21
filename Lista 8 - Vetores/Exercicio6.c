#include <stdio.h>
#include <stdlib.h>

/*Escreva um programa que leia do teclado um vetor de 10 posições. Escreva
na tela quantos valores pares foram armazenados nesse vetor.*/

int main () {
    int vet[10];
    int P=0;
    printf("Digite 10 numeros inteiros:\n");
    for (int i=0; i<10; i++) {
        scanf("%d", &vet[i]);
    }
    for (int i=0; i<10; i++) {
        if (vet[i]%2==0) {
            P++;
        }
    }
    printf("Quantidade de valores pares: %d\n", P);
    return 0;
}
