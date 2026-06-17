#include <stdio.h>

int main(){
    int n1, n2, d;
    printf("Digite dois valores:\n");
    scanf("%d %d", &n1, &n2);
    d = n1;
    while (d >= n2) {
        d = d - n2;
    }

    printf("O resto da divisao de %d por %d eh: %d\n", n1, n2, d);

    return 0;
}
