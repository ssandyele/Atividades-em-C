#include <stdio.h>
#include <stdlib.h>

/*A CEF concederá um crédito especial com juros de 2% aos seus clientes de
acordo com o saldo médio no último ano. Fazer um Algoritmo que leia o saldo
médio de um cliente e calcule o valor do crédito de acordo com a tabela a seguir.
Imprimir uma mensagem informando o saldo médio e o valor de crédito.
| **Saldo Médio** | **Percentual**              |
| --------------- | --------------------------- |
| De 0 a 500      | Nenhum crédito              |
| De 501 a 1000   | 30% do valor do saldo médio |
| De 1001 a 3000  | 40% do valor do saldo médio |
| Acima de 3001   | 50% do valor do saldo médio |
*/

int main () {
    float saldo, cred;
    printf("Digite o saldo medio:\n");
    scanf("%f", &saldo);
    if (saldo<500) {
        printf("Saldo medio: %.2f\n", saldo);
        printf("Valor do credito: Nenhum credito\n");
}
else if (saldo>=501 && saldo<1000) {
    printf("Saldo medio: %.2f\n", saldo);
    cred=saldo*0.3;
    printf("Valor do credito: %.2f\n", cred);
}
else if (saldo>=1001 && saldo<3000) {
    printf("Saldo medio: %.2f\n", saldo);
    cred=saldo*0.4;
    printf("Valor do credito: %.2f\n", cred);
}
else {
    printf("Saldo medio: %.2f\n", saldo);
    cred=saldo*0.5;
    printf("Valor do credito: %.2f\n", cred);
}
    return 0;
}
