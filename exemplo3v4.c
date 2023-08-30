#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

typedef  struct aluno {
    char *nome;
    float nota;
} Aluno;

typedef struct Item {
    Aluno valor;
    struct Item* proximo;
} Item;

Item* criarItem(Aluno valor) {
    Item* novoItem = malloc(sizeof(Item));
    novoItem->valor = valor;
    novoItem->proximo = NULL;

    return novoItem;
}

void adicionarItem(Item** primeiro, Aluno valor){
    Item* novoItem = criarItem(valor);

    if (*primeiro == NULL) {
        *primeiro = novoItem;
    } else {
        Item* atual = *primeiro;
        while (atual->proximo != NULL) {

            atual = atual->proximo;
        }
        atual->proximo = novoItem;
    }
}

void exibirLista(Item** inicio) {
    Item* item = *inicio;
    while (item != NULL) {
        Aluno aluno = item->valor;
        printf("Nome: %s \n", aluno.nome);
        printf("Nota: %.1f \n", aluno.nome);

        item = item->proximo;
    }
}

Aluno criarAluno() {
    Aluno aluno;
    aluno.nome = malloc(50);

    printf("Informe o nome do aluno: ");
    scanf(" %[^\n]", aluno.nome);

    printf("Informe a nota do aluno: ");
    scanf("%f", &aluno.nota);

    return aluno;
}




int main () {
    char continuar = 'N';
    Item* inicio = NULL;

    do {
        Aluno aluno = criarAluno();
        adicionarItem(&inicio, aluno);

        printf("Deseja continuar? (S/N) ");
        scanf(" %c", &continuar);

    } while (toupper(continuar) == 'S');

    exibirLista(&inicio);

    return 0;
}