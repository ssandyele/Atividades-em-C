#include <stdio.h>
#include <stdlib.h>

/*Faça uma função em C que receba como parâmetros três números inteiros:
a, b, e c, sendo a maior que 1 (verifique). A função deve somar todos os
inteiros entre b e c que sejam divisíveis por a (inclusive b e c) e retornar o
resultado*/

int soma (int A, int B, int C) {
    int i, S=0;
    for(i=B;i<=C;i++) {
        if (i%A==0) {
            S=S+i;
        }
    }
    return S;
}

int main()
{
    int a, b, c, aux;
    do {
    printf("Digite um valor inteiro maior que 1!\n");
    scanf("%d", &a);
    } while (a<=1);
    printf("Digite mais um numero inteiro: ");
    scanf("%d", &b);
    printf("Digite mais um numero inteiro: ");
    scanf("%d", &c);
    if(b>c) {
        aux=b;
        b=c;
        c=aux;
    }
    printf("\nResultado final: %d\n", soma(a,b,c));
    return 0;
}