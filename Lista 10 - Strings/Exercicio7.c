#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/*Escreva um programa que leia uma string do teclado e converta todos os seus
caracteres em maiúscula. Dica: subtraia 32 dos caracteres cujo código ASCII
está entre 97 e 122.*/

int main() {
    char str[50];
    printf("Digite uma frase: ");
    fgets(str,50,stdin);
    str[strcspn(str, "\n")] = '\0';
    for (int i=0; str[i] != '\0'; i++) {
        if (str[i]>='a' && str[i]<='z') {
            str[i] = str[i] - 32;
        }
    }
    printf("\nFrase em maiusculo: %s\n", str);
    return 0;
}