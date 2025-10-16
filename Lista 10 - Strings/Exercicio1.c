#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/*Faça um programa que leia uma string e a imprima de trás para a frente.*/

int main() {
    char str[50];
    printf("Digite uma palavra: ");
    fgets(str,50,stdin);
    str[strcspn(str, "\n")] = '\0';
    printf("\nPalavra de trás para frente: ");
    for (int i=strlen(str)-1;i>=0;i--) {
        printf("%c", str[i]);
    }
    printf("\n");
    return 0;
}
