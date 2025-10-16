#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/*Faça um programa que leia uma string e imprima uma mensagem dizendo se
ela é um palíndromo ou não. Um palíndromo é uma palavra que tem a
propriedade de poder ser lida tanto da direita para a esquerda como da
esquerda para a direita. Exemplos: ovo, arara, rever, asa, osso etc.*/

int main() {
    char str[50], cop[50];
    int i,j;
    printf("Digite uma palavra: ");
    fgets(str,50,stdin);
    str[strcspn(str, "\n")] = '\0';
    for (i=strlen(str)-1, j=0; i>=0; i--, j++) {
        cop[j]=str[i];
    }
    cop[j] = '\0';
    int ok = strcmp (str,cop);
    if (ok==0) {
        printf("\nSim, \"%s\" e um palidromo!\n", str);
    } else {
        printf("\nNao, \"%s\" nao e um palidromo.\n", str);
    }
    return 0;
}