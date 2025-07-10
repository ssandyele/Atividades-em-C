#include <stdio.h>
#include <stdlib.h>

/*
DATA 24/03
Sandyele Severo
Lista 2.2
*/

int main()
{
    /*
     Exerc�cio 1-----------------------------------------------------------------------------------
    Elabore um programa que escreva as mensagens �In�cio do programa� e
�Fim� na tela, uma em cada linha, usando apenas um comando printf().

    printf("Inicio do programa\nFim\n");


    Exercicio 2 -------------------------------------------------------------------------------------
    Escreva um programa que leia um n�mero inteiro e depois o imprima.

    int var;
    printf("Digite um numero inteiro:\n");
    scanf("%d",&var);
    printf("O valor da variavel e: %d",var );

    Exercicio 3 -------------------------------------------------------------------------------------
    Escreva um programa que leia um n�mero inteiro e depois imprima a
mensagem �Valor lido:�, seguido do valor inteiro. Use apenas um comando
printf().

    int valor;
    scanf("%d",&valor);
    printf("Valor lido: %d",valor );

   Exercicio 4 --------------------------------------------------------------------------------------
   Fa�a um programa que leia um n�mero inteiro e depois o imprima usando o
operador �%f�. Veja o que aconteceu.

    int valor;
    scanf("%d",&valor);
    printf("Valor lido: %f",valor );

    Exercicio 5 -------------------------------------------------------------------------------------
    Fa�a um programa que leia um valor do tipo float e depois o imprima usando
o operador �%d�. Veja o que aconteceu.

    float valor;
    scanf("%f",&valor);
    printf("Valor lido: %d",valor);

    Exercicio 6 -------------------------------------------------------------------------------------
    Fa�a um programa que leia um valor do tipo double e depois o imprima na
forma de nota��o cient�fica.

    double valor;
    scanf("%lf",&valor);
    printf("Valor lido: %e",valor );

    Exercicio 7 -------------------------------------------------------------------------------------
    Elabore um programa que leia um caractere e depois o imprima como um
valor inteiro.

    char c;
    scanf("%c",&c);
    printf("Valor lido: %d",c );

    Exercicio 8 -------------------------------------------------------------------------------------
    Fa�a um programa que leia dois n�meros inteiros e depois os imprima na
ordem inversa em que eles foram lidos.

    int num1, num2;
    scanf("%d %d",&num1,&num2);
    printf("%d %d",num2,num1);

    Exercicio 9 -------------------------------------------------------------------------------------
    Fa�a um programa que leia dois valores do tipo float. Use um �nico
comando de leitura para isso. Em seguida, imprima os valores lidos na ordem
inversa em que eles foram lidos.

    float v1, v2;
    scanf("%f %f", &v1, &v2);
    printf("%f\n%f",v2,v1);

    Exercicio 10 ------------------------------------------------------------------------------------
    Elabore um programa que solicite ao usu�rio entrar com o valor do dia, m�s
e ano (inteiros). Em seguida, imprima os valores lidos separados por uma barra
(\).

    int dia, mes, a;
    printf("Digite o dia:\n");
    scanf("%d",&dia);
    printf("Digite o mes:\n");
    scanf("%d", &mes);
    printf("Digite o ano:\n");
    scanf("%d", &a);
    printf("\nA data fornecida foi: %d\\%d\\%d\n", dia, mes, a);

    Exercicio 11 ------------------------------------------------------------------------------------
    Elabore um programa que contenha uma constante qualquer do tipo float.
Use o comando #define. Imprima essa constante.

    #define num  3.5
    printf("%f", num);

    Exercicio 12 ------------------------------------------------------------------------------------
    Elabore um programa que contenha uma constante qualquer do tipo int.
Use o comando const. Imprima essa constante.

    const int num = 7;
    printf("%d", num);

    Exercicio 13 ------------------------------------------------------------------------------------
    Fa�a um programa que leia um caractere do tipo char e depois o imprima
entre aspas duplas. Assim, se o caractere lido for a letra A, dever� ser
impresso �A�.

    char var;
    scanf("%c", &var);
    printf("\"%c\"",var);

    Exercicio 14 ------------------------------------------------------------------------------------
    Fa�a um programa que leia tr�s caracteres do tipo char e depois os
imprima um em cada linha. Use um �nico comando printf() para isso.

    char a,b,c;
    printf("Digite 3 caracteres\n");
    scanf("%c %c %c",&a,&b,&c);
    printf("os valores digitados: \n%c\n%c\n%c\n",a,b,c);

    Exercicio 15 ------------------------------------------------------------------------------------
    Escreva um programa que leia tr�s vari�veis: char, int e float. Em seguida,
imprima-as de tr�s maneiras diferentes: separadas por espa�os, por uma
tabula��o horizontal e uma em cada linha. Use um �nico comando printf() para
CADA opera��o de escrita das tr�s vari�veis. */

    char car;
    int var;
    float flu;
    printf("Digite um caractere, um numero inteiro e um numero racional\n");
    scanf("%c %d %f", &car, &var, &flu);
    printf("%c %d %.2f", car, var, flu);//Printf dos espa�os
    printf("\n\t%c \t%d \t%.2f", car, var, flu);//Printf da tabula��o
    printf("\n%c \n%d \n%.2f", car, var, flu);//Printf de um em cada linha
     //Mas se for usar um �nico comando que contenha as 3 opera��es, e n�o um para cada
     //uma delas, poderia ser usado o:
     //printf("%c %d %.2f\n\t%c \t%d \t%.2f\n%c \n%d \n%.2f", car, var, flu, car, var, flu, car, var, flu);

    return 0;
}

