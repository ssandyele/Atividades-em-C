#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*EXERCICIO 2 -------------------------------------------------------------------------
/*Crie uma estrutura para representar as coordenadas de um ponto no
plano (posições X e Y). Em seguida, declare e leia do teclado um ponto e exiba
a distância dele até a origem das coordenadas, isto é, a posição (0,0).*/

    struct coord {
        int x;
        int y;
    };

    typedef struct coord coord;

int main () {
    coord c;
    int B, C;
    float A;
    printf("Qual a posicao do ponto no eixo x? ");
    scanf("%d", &c.x);
    printf("Qual a posicao do ponto no eixo y? ");
    scanf("%d", &c.y);
    B=c.x; C=c.y;
    if (c.x<0) {
        B=c.x*(-1);
    }
    if (c.y<0) {
        C=c.y*(-1);
    }

    A=sqrt((B*B)+(C*C));
    printf("\nDistancia do ponto (%d,%d) ate a origem (0,0):\n%.2f\n", c.x, c.y, A);

    return 0;
}