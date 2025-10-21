#include <stdio.h>
#include <stdlib.h>

/*Faça uma função recursiva que calcule o valor da série S descrita a seguir
para um valor n maior do que zero a ser fornecido como parâmetro para a
mesma:
    S=2 + 5/2 + 10/3 + ... + 1+N²/N  */

float serie (float n) {
    if (n==0) {
        return n;
    }
    return serie(n-1) + (1+n*n)/n;
}

int main () {
    float n;
    printf("Digite um numero inteiro maior que 0: ");
    scanf("%f", &n);
    printf("\nValor da Serie S: %.2f\n", serie(n));
    return 0;
}