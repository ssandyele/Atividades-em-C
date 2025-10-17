#include <stdio.h>
#include <stdlib.h>

/*Elabore um algoritmo que:
a) leia as coordenadas de um retângulo (x1,y1), (x2,y2), (x3, y3), (x4, y4);
b) calcule o perímetro do retângulo formado pelas coordenadas lidas
c) imprima o perímetro do retângulo
Obs.: Cada tarefa deve ser realizada por uma função. Utilize apenas
variáveis globais.*/

int x1, x2, x3, x4, y1, y2, y3, y4, per, A, B;

void retangulo();
void lerCoords ();
void calculo();
void perimetro();

int main() {
    retangulo();
    lerCoords();
    calculo();
    perimetro();
}


void lerCoords () {
    printf("\nDigite as coordenadas do retangulo:\n");
    printf("x1, y1: ");
    scanf("%d %d", &x1, &y1);
    printf("x2, y2: ");
    scanf("%d %d", &x2, &y2);
    printf("x3, y3: ");
    scanf("%d %d", &x3, &y3);
    printf("x4, y4: ");
    scanf("%d %d", &x4, &y4);
}

void calculo () {
    A=x2-x1;
    B=y2-y4;
    per=A+A+B+B;
}

void perimetro ()
{
    printf("\nPerimetro do retangulo informado: %d\n", per);
}

void retangulo (){
    int i, j;
    printf("1");
    for (i=1;i<=12;i++) {
        printf("-");
    }
    printf("2\n");
    for (j=1;j<=4;j++){
        printf("|");
        for (i=1;i<=12;i++) {
            printf(" ");
        }
        printf("|\n");
    }
        printf("3");
    for (i=1;i<=12;i++) {
        printf("-");
    }
    printf("4\n");
}