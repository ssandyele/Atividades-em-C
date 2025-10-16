#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*EXERCICIO 3 -------------------------------------------------------------------------
/*Crie uma estrutura para representar as coordenadas de um ponto no
plano (posições X e Y). Em seguida, declare e leia do teclado dois pontos e
exiba a distância entre eles.*/

    struct ponto {
        int x;
        int y;
    };

    typedef struct ponto ponto;

int main() {
    ponto A;
    ponto B;
    int X, Y;
    float D;

    printf("Digite a coordenada X do ponto A: ");
    scanf("%d", &A.x);
    printf("Digite a coordenada Y do ponto A: ");
    scanf("%d", &A.y);
    printf("Digite a coordenada X do ponto B: ");
    scanf("%d", &B.x);
    printf("Digite a coordenada Y do ponto B: ");
    scanf("%d", &B.y);
//Calculando lados e distancia
    X=B.x-A.x;
    Y=B.y-A.y;
    D=sqrt((X*X)+(Y*Y));

    printf("\n\nDistancia entre os dois pontos: %.2f\n", D);

    return 0;
}