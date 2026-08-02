#include <stdio.h>

int main(){

    int N;

    printf("Digite um numero impar positivo N (N >= 3): ");
    scanf("%d", &N);

    if (N < 3 || N % 2 == 0){
        printf("Valor invalido.\n");
        return 0;
    }

    int meio = N / 2;                     // linha do meio (indice 0-based)

    for (int i = 0; i < N; i++){
        int estrelas = (i <= meio) ? (N - 2 * i)     // metade de cima
                                   : (2 * i - N + 2); // metade de baixo
        int espacos  = (i <= meio) ? i : (N - 1 - i);

        for (int j = 0; j < espacos; j++)
            printf(" ");
        for (int j = 0; j < estrelas; j++)
            printf("*");
        printf("\n");
    }

    return 0;

}