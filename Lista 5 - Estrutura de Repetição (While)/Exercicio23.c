#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*Criar um Algoritmo que leia um número (NUM) e então imprima os múltiplos de 3 e
5, ao mesmo tempo, no intervalo fechado de 1 a NUM.*/

int main () {
    int num, i=1;
    scanf("%d", &num);
    while(i<=num){
        if (i%3==0 || i%5==0) {
            printf("%d ", i);
        }
        i++;
    }
    return 0;
}
