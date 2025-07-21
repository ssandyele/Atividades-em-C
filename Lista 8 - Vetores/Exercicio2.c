#include <stdio.h>
#include <stdlib.h>

/*Crie um programa que leia do teclado seis valores inteiros e em seguida
mostre na tela os valores lidos na ordem inversa.*/

int main () {
    int vet[6];
    printf("Digite 6 numeros inteiros:\n");
    for (int i=0; i<6; i++) {
        scanf("%d", &vet[i]);
    }
    printf("Valores lidos: ");
    for (int i=5; i>=0; i--) {
        printf("%d ", vet[i]);
    }
    return 0;
}
