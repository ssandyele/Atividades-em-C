#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/*Escreva um programa que leia o nome e o valor de determinada mercadoria de
uma loja. Sabendo que o desconto para pagamento à vista é de 10% sobre o
valor total, calcule o valor a ser pago à vista. Escreva o nome da mercadoria, o
valor total, o valor do desconto e o valor a ser pago à vista.*/

int main() {
    char merc[50];
    float valor, desc, pago;
    printf("Digite o nome da mercadoria: ");
    fgets(merc,50,stdin);
    merc[strcspn(merc, "\n")] = '\0';
    printf("Digite o valor: R$");
    scanf("%f", &valor);
    desc=valor*(10.0/100.0);
    pago=valor-desc;

    printf("\nMercadoria: %s\n", merc);
    printf("Valor original: %.2f\n", valor);
    printf("Desconto para pagamento a vista: %.2f\n", desc);
    printf("Valor a ser pago: %.2f\n", pago);
    return 0;
}