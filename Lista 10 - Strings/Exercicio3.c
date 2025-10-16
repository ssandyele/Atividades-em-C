#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/*Leia uma string do teclado e conte quantas vogais (a, e, i, o, u) ela possui.
Entre com um caractere (vogal ou consoante) e substitua todas as vogais da
palavra dada por esse caractere. Ao final, imprima a nova string e o número de
vogais que ela possui.*/

int main() {
    char sub, str[50];
    int cont=0, i;
    printf("Digite uma frase: ");
    fgets(str,50,stdin);
    str[strcspn(str, "\n")] = '\0';
    printf("Digite um caractere (vogal ou consoante) para substituir as vogais: ");
    scanf("%c", &sub);
    for(i=0;i<strlen(str);i++) {
        if (str[i]=='A'||str[i]=='a'||str[i]=='E'||str[i]=='e'||str[i]=='I'||str[i]=='i'||str[i]=='O'||str[i]=='o'||str[i]=='U'||str[i]=='u') {
            cont++;
            str[i]=sub;
        }
    }
    printf("\nQuantidade de vogais: %d\n", cont);
    printf("Texto substituindo as vogais: %s\n", str);
    return 0;
}