#include <stdio.h>
#include <stdlib.h>

/*Crie uma função recursiva que receba um número inteiro N e retorne o
somatório dos números de 1 a N.*/

int soma (int n) {
    if (n==1)
        return 1;
    return n + soma (n-1);
    }

int main()
{
    int n;
    printf("Digite um numero inteiro: ");
    scanf("%d", &n);
    printf("\nSomatorio de 1 a %d: %d\n", n, soma(n));
    return 0;
}