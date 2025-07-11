#include <stdio.h>
#include <stdlib.h>

/*Em épocas de pouco dinheiro, os comerciantes estão procurando aumentar suas
vendas oferecendo desconto. Faça um Algoritmo que possa entrar com o valor de um
produto e imprima o novo valor tendo em vista que o desconto foi de 9%. Além disso,
imprima o valor do desconto.*/

int main () {
    float produto, desconto;
    printf("Digite o valor do produto:\n");
    scanf("%f", &produto);
    desconto= produto*9/100;
    produto=produto-desconto;
    printf("O valor do produto com desconto: %.2f\n", produto);
    printf("Valor do desconto: %.2f\n", desconto);
    return 0;
}
