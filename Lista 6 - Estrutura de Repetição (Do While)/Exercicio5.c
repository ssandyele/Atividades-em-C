#include <stdio.h>
#include <stdlib.h>


/*Faça um programa que leia um conjunto de pedidos e calcule o total da compra.
O pedido possui os seguintes campos: número, data (dia, mês e ano), preço
unitário e quantidade. A entrada de pedidos é encerrada quando o usuário
informa zero como número do pedido.*/

int main () {
    int num, d, m, a, qnt;
    float preco, total;
    do {
        printf("\nDigite o numero do pedido:\n(Digite zero se deseja encerrar a lista de pedidos)\n");
        scanf("%d", &num);
        if (num!=0) {
            printf("Digite a data (utilize 00/00/00):\n");
            scanf("%d/%d/%d", &d, &m, &a);
            printf("Digite o preco da unidade:\n");
            scanf("%f", &preco);
            printf("Digite a quantidade de produtos:\n");
            scanf("%d", &qnt);
            total=total+(preco*qnt);
        }
    } while (num!=0);
    printf("VALOR TOTAL DA COMPRA: R$%.2f\n", total);
    return 0;
}
