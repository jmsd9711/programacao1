#include <stdio.h>

int main(){

    int num, anterior, primeiro = 1, alternada = 1;

    printf("Digite os numeros (0 para encerrar):\n");

    while (1){
        scanf("%d", &num);
        if (num == 0) break;              // flag de parada

        if (primeiro){
            anterior = num;
            primeiro = 0;
        } else {
            // paridade igual => quebra a alternancia
            if ((num % 2 != 0) == (anterior % 2 != 0))
                alternada = 0;
            anterior = num;
        }
    }

    if (alternada)
        printf("Sequencia Alternada\n");
    else
        printf("Sequencia Nao Alternada\n");

    return 0;

}