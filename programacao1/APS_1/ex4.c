#include <stdio.h>

int main(){

    int N;

    printf("Digite a quantidade de linhas: ");
    scanf("%d", &N);

    for (int linha = 0; linha < N; linha++){
        long valor = 1;                   // C(linha, 0) = 1
        for (int col = 0; col <= linha; col++){
            printf("%ld ", valor);
            // C(n, k+1) = C(n, k) * (n - k) / (k + 1)
            valor = valor * (linha - col) / (col + 1);
        }
        printf("\n");
    }

    return 0;

}