#include <stdio.h>

int main() {
    int a = 0, b = 1, i;
    for (i = 0; i < 6; i++) {
        printf("%d ", a);
        int t = a + b;
        a = b;
        b = t;
    }
    printf("\n");
    return 0;
}
