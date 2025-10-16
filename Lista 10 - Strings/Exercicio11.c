#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/*O código de César é uma das técnicas de criptografia mais simples e
conhecidas. É um tipo de substituição no qual cada letra do texto é substituída
por outra, que se apresenta n posições após ela no alfabeto. Por exemplo, com
uma troca de três posições, a letra A seria substituída por D, B se tornaria E e
assim por diante. Escreva um programa que faça uso desse código de César
para três posições. Entre com uma string e imprima a string codificada.
Exemplo: String: a ligeira raposa marrom saltou sobre o cachorro cansado
Nova string: d oljhlud udsrvd pduurp vdowrx vreuh r fdfkruur fdqvdgr*/

int main() {
    char str[100];
    printf("----- CODIGO DE CESAR -----\n");
    printf("Digite uma frase: ");
    fgets(str,100,stdin);
    str[strcspn(str, "\n")] = '\0';
    for (int i = 0; i < strlen(str); i++) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = ((str[i] - 'a' + 3) % 26) + 'a';//Continha necessária por conta dos casos x,y,z;
        } else if (str[i] >= 'A' && str[i] <= 'Z') {
            str[i] = ((str[i] - 'A' + 3) % 26) + 'A';//Continha necessária por conta dos casos X,Y,Z;
        }
    }
    printf("\n%s\n", str);
    return 0;
}