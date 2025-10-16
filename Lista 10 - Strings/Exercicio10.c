#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/*Escreva um programa que recebe uma string S e dois valores inteiros não
negativos i e j. Em seguida, imprima os caracteres contidos no segmento que
vai de i a j da string S.*/

int main() {
    char S[50];
    int i, j;
    printf("Digite uma frase: ");
    fgets(S, 50, stdin);
    S[strcspn(S, "\n")] = '\0';
    do {
    printf("Digite um valor inteiro nao negativo: ");
    scanf("%d", &i);
    } while (i<0);
    do {
    printf("Digite outro valor inteiro nao negativo: ");
    scanf("%d", &j);
    } while (j<0);
    if (i>strlen(S)&&j>strlen(S)) {
        printf("\nA frase nao esta contida entre esses indices.\n");
    } else if (i<=j) {
        if (j>=strlen(S)) j=strlen(S)-1;
        printf("\nCaracteres contidos no segmento de %d a %d na frase: ", i, j);
        for(int a=i; a<=j; a++) {
            printf("%c", S[a]);
        }
    } else {
        if (i>=strlen(S)) i=strlen(S)-1;
        printf("\nCaracteres contidos no segmento de %d a %d na frase: ", j, i);
        for(int a=j; a<=i; a++) {
            printf("%c", S[a]);
        }
    }
    printf("\n");
    return 0;
}