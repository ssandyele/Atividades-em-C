#include <stdio.h>
#include <stdlib.h>

/*Faça um programa que leia um caractere do tipo char e depois o imprima
entre aspas duplas. Assim, se o caractere lido for a letra A, deverá ser
impresso “A”.*/

int main () {
    char var;
    printf("Digite um caractere: ");
    scanf("%c", &var);
    printf("\"%c\"",var);
    return 0;
}
