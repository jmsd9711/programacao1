#include <stdio.h>

int main(){

    int N;

    printf("Digite um inteiro positivo N: ");
    scanf("%d", &N);

    while (N >= 10){                      // enquanto tiver mais de 1 digito
        int soma = 0;
        while (N > 0){
            soma += N % 10;               // soma os digitos
            N = N / 10;
        }
        N = soma;                         // N vira a soma dos digitos
    }

    printf("Raiz digital: %d\n", N);
    return 0;

}