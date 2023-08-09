#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct  aluno{
    char *nome;
    float nota;
};

int main() {
    struct aluno a[3];
    int i;

    for (i = 0; i < 3; i++) {
        a[i].nome = malloc(50);

        printf("Informe o nome do aluno: ");
        scanf(" %[^\n]", a[i].nome);

        printf("Informe a nota do aluno: ");
        scanf("%f", &a[i].nota);
    }

    for (i = 0; i < 3; i++) {
        if (a[i].nota >= 7) {
            printf("Aluno %s está aprovado com nota %.2f \n", a[i].nome, a[i].nota);
        } else {
            printf("Aluno %s está reprovado com nota %.2f \n", a[i].nome, a[i].nota);
        }
    }

    return 0;
}
