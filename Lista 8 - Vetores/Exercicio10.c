#include <stdio.h>
#include <stdlib.h>

/*Faça um programa que preencha um vetor de tamanho 100 com os 100
primeiros números naturais que não são múltiplos de 7. Ao final, imprima esse
vetor na tela.*/

int main () {
    int vet[100];
    for(int i=0, N=1; i<100; N++) {
        if (N%7!=0) {
            vet[i]=N;
            i++;
        }
    }
    for (int i=0; i<100; i++) {
        printf("%d ", vet[i]);
    }
    return 0;
}
