#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct  aluno{
    char *nome;
    float nota;
};

int main() {
    struct aluno a;
    a.nome = malloc(50);

    printf("Informe o nome do aluno: ");
    scanf(" %[^\n]", a.nome);

    printf("Informe a sua nota: ");
    scanf("%f", &a.nota);

    if (a.nota >= 7){
        printf("O aluno %s está aprovado.", a.nome);
    } else {
        printf("O aluno %s está reprovado.", a.nome);
    }


    return 0;
}
