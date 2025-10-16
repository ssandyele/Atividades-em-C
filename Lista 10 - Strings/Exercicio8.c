#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/*Escreva um programa que leia uma string do teclado e converta todos os seus
caracteres em minúscula. Dica: some 32 dos caracteres cujo código ASCII está
entre 65 e 90.*/

int main() {
    char str[50];
    printf("Digite uma frase: ");
    fgets(str,50,stdin);
    str[strcspn(str, "\n")] = '\0';
    for (int i=0; str[i] != '\0'; i++) {
        if (str[i]>='A' && str[i]<='Z') {
            str[i] = str[i] + 32;
        }
    }
    printf("\nFrase em minusculo: %s\n", str);
    return 0;
}