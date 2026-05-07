#include <stdio.h>

int main(){

    float a, b, c, maior;
    printf("Digite tres numeros diferentes: \n");
    scanf("%f %f %f", &a, &b, &c);
    maior = a;
    if(b > maior){
        maior = b;
    }
    if(c > maior){
        maior = c;
    }
    printf("O maior numero eh: %.2f", maior);
    return 0;
}