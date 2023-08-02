#include <stdio.h>

int main() {
    float saldo;
    float lancamento[10];
    int i;

    printf("Informe o saldo atual da sua conta: ");
    scanf("%f", &saldo);

    for (i = 0; i < 10; i++) {
        printf("Informe o lançamento %d: ", i);
        scanf("%f", &lancamento[i]);

        saldo = saldo + lancamento[i];
    }

    printf("O saldo final da conta é de R$ %.2f", saldo);



    return 0;
}