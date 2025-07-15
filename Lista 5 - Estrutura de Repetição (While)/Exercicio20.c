#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*Criar um Algoritmo que leia dez números inteiros e imprima o maior e o menor
número da lista.*/

int main () {
    int cont=1, leia, menor, maior;
    printf("Digite 10 numeros:\n");
    scanf("%d", &leia);
    maior=leia;
    menor=leia;
    cont++;
    while (cont<=10) {
        scanf("%d", &leia);
        if (leia>maior) {
            maior=leia;
        } else if (leia<menor) {
            menor=leia;
        }
        cont++;
    }
    printf("Maior: %d\nMenor: %d\n", maior, menor);
    return 0;
}
