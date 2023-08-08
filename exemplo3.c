#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char *nome = malloc(50);
    float nota;

    printf("Informe o nome do aluno: ");
    scanf(" %[^\n]", nome);

    printf("Informe a sua nota: ");
    scanf("%f", &nota);

    if (nota >= 7){
        printf("O aluno está aprovado");
    } else {
        printf("O aluno está reprovado");
    }

    free(nome);

    return 0;
}
