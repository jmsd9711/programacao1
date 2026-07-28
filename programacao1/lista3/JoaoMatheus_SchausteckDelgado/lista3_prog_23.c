#include <stdio.h>

int main(void) {
    int a, b, resto;

    printf("Digite dois numeros inteiros positivos: ");
    scanf("%d %d", &a, &b);
    while(b!=0) {
        resto =a%b;
        a =b;
        b =resto;
    }

    printf("O MDC e: %d\n",a);
    return 0;
}