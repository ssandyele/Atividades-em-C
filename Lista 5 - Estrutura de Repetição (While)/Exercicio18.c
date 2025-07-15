#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*Criar um Algoritmo que imprima todos os números de 1 até 100, inclusive, e a soma
do cubo desses números.*/

int main () {
    int soma, i=1;
    while(i<=100) {
        printf("%d ", i);
        soma=soma+(i*i*i);
        i++;
    }
    printf("\nA soma do cubo desses numeros e: %d", soma);
    return 0;
}
