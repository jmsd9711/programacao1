#include <stdio.h>

int main() {
    int i;
    for (i = 0; i < 5; i++) { 
        printf("%d ", 1 << i);
        // 1<<0 = 1
        // 1<<1 = 2
        // 1<<2 = 4
        // 1<<3 = 8
        // 1<<4 = 16
    }
    printf("\n");
    return 0;
}
