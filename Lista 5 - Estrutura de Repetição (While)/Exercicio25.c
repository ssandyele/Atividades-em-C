#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*Escreva um Algoritmo que receba 15 números e imprima quantos números maiores
que 30 foram digitados.*/

int main () {
    int cont=1, qnt=0, leia;
    printf("Digite 15 numeros:\n");
    while (cont<=15) {
        scanf("%d", &leia);
        if (leia>30) {
            qnt++;
        }
        cont++;
    }
    printf("Total de numeros acima de 30: %d", qnt);
    return 0;
}
