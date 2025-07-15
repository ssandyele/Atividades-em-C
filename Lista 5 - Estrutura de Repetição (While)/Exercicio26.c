#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*Escreva um Algoritmo que leia 20 números e imprima a soma dos positivos e o total
de números negativos.*/

int main () {
    int cont=1, soma=0, qnt=0, leia;
    printf("Digite 20 numeros:\n");
    while (cont<=20) {
        scanf("%d", &leia);
        if (leia>0) {
            soma=soma+leia;
        } else if(leia<0) {
            qnt++;
        }
        cont++;
    }
    printf("\nA soma dos positivos e: %d\nA quantidade de negativos e: %d\n", soma, qnt);
    return 0;
}
