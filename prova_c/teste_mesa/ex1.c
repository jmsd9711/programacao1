#include <stdio.h>

int main() {
    int x = 13;        // 1101 em binário
    int count = 0;

    while (x > 0) {
        count += x & 1;
        x >>= 1;
    }

    printf("%d\n", count);
    return 0;
}
