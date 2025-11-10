#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*Crie uma função void reverse(char *s) que inverte a string s in place
(sem usar memória extra). No main, leia uma linha (até 200 caracteres),
chame reverse e imprima a string invertida.*/

void reverse (char *s) {
    char *i = s;
    char *f = s + strlen(s) - 1;
    char temp;

    while (i < f) {
        temp = *i;
        *i = *f;
        *f = temp;

        i++;
        f--;
    }
}

int main() {
    char s[201];
    printf("Digite uma string (até 200 caracteres): ");
    fgets(s, 201, stdin);

    int len = strlen(s);
    if (len > 0 && s[len - 1] == '\n') {
        s[len - 1] = '\0';
    }
    reverse(s);

    printf("String invertida: %s\n", s);
    return 0;
}