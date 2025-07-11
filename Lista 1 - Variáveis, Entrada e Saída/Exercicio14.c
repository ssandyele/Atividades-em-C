#include <stdio.h>
#include <stdlib.h>

/*Faça um programa que leia três caracteres do tipo char e depois os
imprima um em cada linha. Use um único comando printf() para isso.*/

int main () {
    char a,b,c;
    printf("Digite 3 caracteres\n");
    scanf("%c %c %c",&a,&b,&c);
    printf("Os valores digitados: \n%c\n%c\n%c\n",a,b,c);
    return 0;
}
