#include <stdio.h>
#include <stdlib.h>

/*Escreva um Algoritmo que imprima todos os números ímpares do intervalo fechado
de 1 a 100.*/

int main () {
    int i = 1;
    while (i<=100) {
        if(i%2==1){
            printf("%d ", i);
        }
    i++;
    }
    return 0;
}
