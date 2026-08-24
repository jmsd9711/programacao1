#include <stdio.h>

int main() {
    int n = 7;
    int cont = 0;
    do {
        n /= 2;
        cont++;
    } while (n > 0);
    printf("n = %d, cont = %d\n", n, cont);
    return 0;
}
