#include <stdio.h>
#include <stdlib.h>

/*Crie uma função recursiva que receba um número inteiro N e imprima todos
os números naturais de 0 até N em ordem decrescente.*/

int imprima (int n) {
    if (n==0)
        return 0;
    printf ("%d ", n);
    imprima (n-1);
}

int main () {
    int n;
    printf("Digite um numero inteiro: ");
    scanf("%d", &n);
    printf("%d", imprima(n));
    return 0;
}