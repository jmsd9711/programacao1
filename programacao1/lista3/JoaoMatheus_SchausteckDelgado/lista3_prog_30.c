#include <stdio.h>

int main() {
    int a = 0, b = 1, f, i;
    printf("%d\n", a);
    printf("%d\n", b);
    for(i = 3; i <= 20; i++) {
        f = a + b;
        printf("%d\n", f);
        a = b;
        b = f;
    }

    return 0;
}