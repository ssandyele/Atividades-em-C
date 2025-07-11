#include <stdio.h>
#include <stdlib.h>

/*Faça um programa que leia um valor do tipo double e depois o imprima na
forma de notação científica.*/

int main () {
    double valor;
    printf("Digite um valor: ");
    scanf("%lf",&valor);
    printf("Valor lido: %e",valor );
    return 0;
}
