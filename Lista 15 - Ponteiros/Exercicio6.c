#include <stdio.h>
#include <stdlib.h>

/*Elabore uma função que receba duas strings como parâmetros e
verifique se a segunda string ocorre dentro da primeira.
Use aritmética de ponteiros para acessar os caracteres das strings.*/

int palavra (char *A, char *B) {
    char *p1, *p2;
    while (*A != '\0') {
        p1 = A;
        p2 = B;
        while (*p1 != '\0' && *p2 != '\0' && *p1 == *p2) {
            p1++;
            p2++;
        }
        if (*p2 == '\0')
            return 1; // encontrou ocorrência
        A++;
    }
    return 0; // não encontrou

}

int main() {
    char A[200], B[200];
    printf("Digite uma string (ate 200 caracteres): ");
    fgets(A, 200, stdin);
    printf("Digite mais uma string (ate 200 caracteres): ");
    fgets(B, 200, stdin);

    A[strcspn(A,"\n")]='\0';
    B[strcspn(B,"\n")]='\0';

    if(palavra(A,B)==0) {
        printf("\n'%s' nao ocorre em '%s'.\n", B, A);
    } else {
        printf("\n'%s' ocorre em '%s'.\n", B, A);
    }
    return 0;
}