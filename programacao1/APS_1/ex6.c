#include <stdio.h>

int main(){

    int N, fator = 2, primeiro = 1;

    printf("Digite N (N > 1): ");
    scanf("%d", &N);

    while (fator * fator <= N){           // nao precisa ir alem da raiz
        while (N % fator == 0){           // divide quantas vezes puder
            if (!primeiro) printf(" x ");
            printf("%d", fator);
            primeiro = 0;
            N = N / fator;
        }
        fator++;
    }

    if (N > 1){                           // sobra um fator primo
        if (!primeiro) printf(" x ");
        printf("%d", N);
    }

    printf("\n");
    return 0;

}