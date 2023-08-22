#include <stdio.h>
#include <stdlib.h>

struct produto {
    char *nome;
    int quantidade;
    float preco;
    float total;
};

int main () {

    struct produto listaProdutos[5];

    int i;
    float total;
    for (i = 0; i < 5; ++i) {
        listaProdutos[i].nome = malloc(50);

        printf("Informe o nome do produto: ");
        scanf(" %[^\n]", listaProdutos[i].nome);

        printf("Informe a quantidade do produto: ");
        scanf("%d", &listaProdutos[i].quantidade);

        printf("Informe o valor unitário do produto: ");
        scanf("%f", &listaProdutos[i].preco);

        listaProdutos[i].total = listaProdutos[i].preco * listaProdutos[i].quantidade;

        total = total + listaProdutos[i].total;
    }

    for (i = 0; i < 5; ++i) {
        printf("%s - %d - %.2f", listaProdutos[i].nome,
               listaProdutos[i].quantidade, listaProdutos[i].total);
    }

    printf("Total da compra: R$ %.2f", total);

    return 0;
}