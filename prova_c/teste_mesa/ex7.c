#include <stdio.h>

int main() {
    unsigned char b = 0b10101100;      // 172
    unsigned char alto = (b >> 4) & 0x0F; //0b1010 = 10
    unsigned char baixo = b & 0x0F;//01010011 = 83
    printf("%u %u\n", alto, baixo);
    return 0;
}
