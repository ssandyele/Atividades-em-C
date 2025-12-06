#include <stdio.h>
#include <stdlib.h>

/*Escreva um programa que mostre o tamanho em byte que cada tipo de dados ocupa
na memória: char, int, float, double.*/

int main() {
    printf("Tamanho dos tipos de dados em bytes:\n");
    printf("char: %d bytes\n", sizeof(char));
    printf("int: %d bytes\n", sizeof(int));
    printf("float: %d bytes\n", sizeof(float));
    printf("double: %d bytes\n", sizeof(double));
    return 0;
}