#include <stdio.h>

int pa(int t, int r, int n) {
    int prog = t;
    int soma = 0;
    for (int i = 1; i <= n; i++) {
        printf("%d\n", prog);
        soma += prog;
        prog += r;
    }
    return soma;
}

int main() {
    int t, r, n;
    scanf("%d %d %d", &t, &r, &n);
    printf("Soma: %d\n", pa(t, r, n));
    return 0;
}
