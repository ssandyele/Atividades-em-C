#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*Criar um Algoritmo que leia dez números inteiros e imprima o maior e o segundo
maior número da lista.*/

int main () {
    int cont=1, leia, seg, maior;
    printf("Digite 10 numeros:\n");
    scanf("%d %d", &maior, &seg);
    if (seg>maior) {
            leia=maior;
            maior=seg;
            seg=leia;
    }
    cont+=2;
    while (cont<=10) {
        scanf("%d", &leia);
        if (leia>maior) {
            maior=leia;
        } else if (leia>seg && leia<maior) {
            seg=leia;
        }
        cont++;
    }
    printf("Maior: %d\nSegundo maior: %d\n", maior, seg);
    return 0;
}
