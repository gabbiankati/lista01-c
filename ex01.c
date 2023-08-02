#include <stdio.h>

int main() {
    int entrada[10];
    int pares[5];
    int impares[5];

    int i;
    int x = 0;
    int y = 0;

    for (i = 0; i < 10; i++) {
        printf("Informe o valor na posição %d: ", i);
        scanf("%d", &entrada[i]);

        if (i % 2 == 0){
            pares[x] = entrada[i];
            x++;
        } else {
            impares[y] = entrada[i];
            y++;
        }
    }

    printf("Valores nas posições pares: \n");
    for (i = 0; i < 5; i++){
        printf("%d \n", pares[i]);

    }

    printf("Valores nas posições impares: \n");
    for (i = 0; i < 5; i++){
        printf("%d \n", impares[i]);

    }


    return 0;
}
