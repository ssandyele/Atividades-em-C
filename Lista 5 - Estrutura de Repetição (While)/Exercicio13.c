#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*Escreva um Algoritmo que receba quinze números do usuário e imprima a raiz
quadrada de cada número.*/

int main () {
    int leia, cont = 1;
    float raiz;
    while(cont<=15) {
        printf("Digite um numero inteiro:\n");
        scanf("%d", &leia);
        raiz=sqrt(leia);
        printf("A raiz quadrada e: %.2f\n\n", raiz);
        cont++;
    }
    return 0;
}
