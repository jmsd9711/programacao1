#include <stdio.h>

int main() {
    unsigned char x = 0b1010;  // 10
    x ^= 0b1111;               // inverte os 4 bits
    printf("%u\n", x);
    return 0;
}
