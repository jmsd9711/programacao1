#include <stdio.h>

int main(){

    int N, invertido = 0, digito;

    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &N);

    while (N > 0){
        digito = N % 10;                  // extrai o ultimo digito
        invertido = invertido * 10 + digito; // acumula no numero invertido
        N = N / 10;                       // remove o ultimo digito
    }

    printf("Numero invertido: %d\n", invertido);
    return 0;

}