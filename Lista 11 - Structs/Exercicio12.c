#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*Elaborar um cadastro para 20 livros contendo as seguintes
informações: código, título, autor, área, ano e editora. Desenvolver
um menu com as seguintes opções:
1. Cadastrar os livros.
2. Imprimir as informações dos livros.
3. Pesquisar livros por código.
4. Ordenar os livros por ano.
5. Sair do programa.*/

    struct livro {
        int cod;
        char titulo[50];
        char autor[50];
        char area[20];
        int ano;
        char edit[30];
    };

    typedef struct livro Livro;

int main () {
    Livro L[20], temp;
    int i, M, P, p, j, q=0;

    do {
        printf("\n----------MENU----------\n");
        printf("1. Cadastrar os livros.\n2. Imprimir as informacoes dos livros.\n3. Pesquisar livros por codigo.\n4. Ordenar os livros por ano.\n5. Sair do programa.\n");

        scanf("%d", &M);

        switch (M) {
            case 1:
                if (q<20) {
                    printf("\n----------LIVRO %d----------\n", i+1);
                    printf("Codigo: ");
                    scanf("%d", &L[q].cod);
                    setbuf(stdin, NULL);

                    printf("Titulo: ");
                    getchar();
                    fgets(L[q].titulo, 50, stdin);
                    L[q].titulo[strcspn(L[q].titulo, "\n")] = '\0';

                    printf("Autor: ");
                    getchar();
                    fgets(L[q].autor, 50, stdin);
                    L[q].autor[strcspn(L[q].autor, "\n")] = '\0';

                    printf("Area: ");
                    getchar();
                    fgets(L[q].area, 50, stdin);
                    L[q].area[strcspn(L[q].area, "\n")] = '\0';

                    printf("Ano: ");
                    scanf("%d", &L[q].ano);
                    setbuf(stdin, NULL);

                    printf("Editora: ");
                    getchar();
                    fgets(L[q].edit, 50, stdin);
                    L[q].edit[strcspn(L[q].edit, "\n")] = '\0';

                    q++;
                } else {
                    printf("Quantidade maxima de livros cadastrados atingida!\n");
                }
                break;
            case 2:
                if (q == 0) {
                        printf("\nNenhum livro cadastrado.\n");
                } else {
                    printf("\n-----INFORMACOES DOS LIVROS-----\n");
                    for (i=0;i<q;i++) {
                        printf("Codigo: %d\n", L[i].cod);
                        printf("Titulo: %s\n", L[i].titulo);
                        printf("Autor: %s\n", L[i].autor);
                        printf("Area: %s\n", L[i].area);
                        printf("Ano: %d\n", L[i].ano);
                        printf("Editora: %s\n\n", L[i].edit);
                    }
                }
                break;
            case 3:
                if (q == 0) {
                        printf("\nNenhum livro cadastrado.\n");
                } else {
                    printf("\n-----PESQUISA-----\n");
                    printf("Digite o codigo do livro: ");
                    scanf("%d", &P);
                    p=-1;
                    for(i=0;i<q;i++) {
                        if(P==L[i].cod) {
                            p=i;
                        }
                    }
                    if(p==-1) {
                        printf("Codigo nao encontrado.\n");
                    } else {
                        printf("\n---LIVRO ENCONTRADO---\n");
                        printf("Codigo: %d\n", L[p].cod);
                        printf("Titulo: %s\n", L[p].titulo);
                        printf("Autor: %s\n", L[p].autor);
                        printf("Area: %s\n", L[p].area);
                        printf("Ano: %d\n", L[p].ano);
                        printf("Editora: %s\n\n", L[p].edit);
                    }
                }
                break;
            case 4:
                if (q == 0) {
                    printf("\nNenhum livro cadastrado.\n");
                } else {
                    for (i = 0; i < q - 1; i++) {
                            for (j = 0; j < q - i - 1; j++) {
                                if (L[j].ano < L[j + 1].ano) {
                                    temp = L[j];
                                    L[j] = L[j + 1];
                                    L[j + 1] = temp;
                                }
                            }
                        }
                    printf("\n---LIVROS ORDENADOS POR ANO---\n");
                    for (i = 0; i < q; i++) {
                            printf("Codigo: %d\n", L[i].cod);
                            printf("Titulo: %s\n", L[i].titulo);
                            printf("Autor: %s\n", L[i].autor);
                            printf("Area: %s\n", L[i].area);
                            printf("Ano: %d\n", L[i].ano);
                            printf("Editora: %s\n\n", L[i].edit);
                        }
                }
                break;
            case 5:
                system ("cls");
                break;
            default:
                printf("Opcao Invalida\n");

        }
    } while (M!=5);
    return 0;
}