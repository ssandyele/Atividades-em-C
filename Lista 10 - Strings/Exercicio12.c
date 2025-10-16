#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/*Escreva um programa que leia duas strings e as imprima em ordem alfabética,
a ordem em que elas apareceriam em um dicionário.*/

int main() {
    char A[50], B[50];
    printf("Digite a primeira palavra (em minusculo): ");
    fgets(A, 50, stdin);
    A[strcspn(A, "\n")] = '\0';
    printf("Digite a segunda palavra (em minusculo): ");
    fgets(B, 50, stdin);
    B[strcspn(B, "\n")] = '\0';
    printf("\nOrganizadas em ordem alfabetica:\n");
    if(strcmp(A,B) <= 0) {
        printf("%s\n%s\n", A, B);
    } else {
        printf("%s\n%s\n", B, A);
    }
    return 0;
}