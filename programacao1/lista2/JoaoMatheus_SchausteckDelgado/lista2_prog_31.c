#include <stdio.h>

int main(){

    int n, parte1, parte2, resultado;
    printf("Digite um numero de 4 digitos: \n");
    scanf("%d", &n);
    parte1 = n / 100;
    parte2 = n % 100;
    resultado = (parte1 + parte2) * (parte1 + parte2);
    if(resultado == n){
        printf("%d satisfaz a caracteristica", n);
    }else{
        printf("%d nao satisfaz a caracteristica", n);
    }
    return 0;
}