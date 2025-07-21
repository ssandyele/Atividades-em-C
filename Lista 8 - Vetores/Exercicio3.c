#include <stdio.h>
#include <stdlib.h>

/*Faça um programa que leia cinco valores e os armazene em um vetor. Em
seguida, mostre todos os valores lidos juntamente com a média dos valores.*/

int main () {
    int vet[5];
    int S=0;
    float M;
    printf("Digite 5 valores inteiros;\n");
    for (int i=0; i<5; i++) {
        scanf("%d", &vet[i]);
        S+= vet[i];
    }
    printf("Valores lidos: ");
    for (int i=0; i<5; i++) {
        printf("%d ", vet[i]);
    }
    M=S/5.0;
    printf("\nA media destes valores e: %.1f\n", M);
    return 0;
}
