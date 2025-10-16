#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/*Faça um programa que leia uma string e a inverta. A string invertida deve ser
armazenada na mesma variável. Em seguida, imprima a string invertida.*/

int main() {
    char str[50], aux[50];
    int i, j;
    printf("Digite uma palavra/texto: ");
    fgets(str,50,stdin);
    str[strcspn(str, "\n")] = '\0';
    for (i=strlen (str)-1, j=0; i>=0; j++, i--) {
        aux[j]=str[i];
    }
    aux[j] = '\0';
    strcpy(str,aux);
    printf("Texto invertido: %s\n", str);
    return 0;
}