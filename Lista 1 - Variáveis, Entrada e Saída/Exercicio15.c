#include <stdio.h>
#include <stdlib.h>

/*Escreva um programa que leia três variáveis: char, int e float. Em seguida,
imprima-as de três maneiras diferentes: separadas por espaços, por uma
tabulação horizontal e uma em cada linha. Use um único comando printf() para
cada operação de escrita das três variáveis.*/

int main () {
    char car;
    int var;
    float flu;
    printf("Digite um caractere, um numero inteiro e um numero racional\n");
    scanf("%c %d %f", &car, &var, &flu);
    printf("%c %d %.2f", car, var, flu);//Printf dos espaços
    printf("\n\t%c \t%d \t%.2f", car, var, flu);//Printf da tabulação
    printf("\n%c \n%d \n%.2f", car, var, flu);//Printf de um em cada linha
    return 0;
}
