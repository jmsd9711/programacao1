#include <stdio.h>

int main() {
    int n,i;
    float a=0;
    printf("Digite um valor de N: \n");
    scanf("%d", &n);
    for (i = 1; i <= n; i++) {
        a += (float)(n - i + 1) / i;
    }
    printf("O valor de A eh: %f",a);
    return 0;
}
