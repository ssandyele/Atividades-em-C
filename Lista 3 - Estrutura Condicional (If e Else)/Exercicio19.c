#include <stdio.h>
#include <stdlib.h>

/*Criar um Algoritmo que leia dois números e imprimir o quadrado do menor
número e raiz quadrada do maior número, se for possível.*/

int main () {
    float a, b, i;
    printf("Digite dois numeros diferentes:\n");
    scanf("%f %f", &a, &b);
    if (a>b) {i=a; a=b; b=i;}
        a=pow(a,2);
        i=sqrt(b);
        printf("Quadrado do menor numero: %.2f\n", a);
        if (b>=0) {
        printf("Raiz quadrada do maior numero: %.2f\n", i);
        } else {
        printf("Nao e possivel calcular a raiz quadrada de %.2f\n", b);
        }
    return 0;
}