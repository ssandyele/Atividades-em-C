#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/*Construa um programa que leia duas strings do teclado. Imprima uma
mensagem informando se a segunda string lida está contida dentro da primeira.*/

int main() {
    char A[50], B[50];
    printf("Digite uma frase: ");
    fgets(A,50,stdin);
    A[strcspn(A,"\n")] = '\0';
    printf("Digite outra frase: ");
    fgets(B,50,stdin);
    B[strcspn (B, "\n")] = '\0';
    if (strstr (A,B) == NULL) {
        printf("\n\"%s\" nao esta contida em \"%s\".\n", B, A);
    } else {
        printf("\n\"%s\" esta contida em \"%s\".\n", B, A);
    }
    return 0;
}