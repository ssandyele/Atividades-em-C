#include <stdio.h>
#include <stdlib.h>

/*Crie um programa que contenha um procedimento que permita passar
por parâmetros dois números inteiros A e B. O procedimento deverá
calcular a soma entre estes dois números e armazenar o resultado na
variável A. Este procedimento não deverá possuir retorno, mas deverá
modificar o valor do primeiro parâmetro. Imprima os valores de A e B
na função principal.*/

void soma (int *A, int B) {
    *A=*A+B;
}

int main() {
    int A, B;
    printf("Digite um numero inteiro: ");
    scanf("%d", &A);
    printf("Digite outro numero inteiro: ");
    scanf("%d", &B);
    soma(&A,B);
    printf("\nValor de A: %d\nValor de B: %d\n", A, B);
    return 0;
}