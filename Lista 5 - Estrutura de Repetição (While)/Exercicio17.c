#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*Criar um Algoritmo que imprima todos os números de 1 até 100, inclusive, e a soma
da metade desses números.*/

int main () {
    int i=1;
    float soma;
    while(i<=100) {
        printf("%d ", i);
        soma=soma+(i/2.0);
        i++;
    }
    printf("\nA soma da metade desses numeros e: %.1f", soma);
    return 0;
}
