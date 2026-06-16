#include <stdio.h>

int main() {
    unsigned char a = 0b00001100; // 12 em decimal
    unsigned char b = 0b00001010; // 10 em decimal
    
    printf("AND: %d\n", a & b);  // 00001000 (8)
    printf("OR: %d\n", a | b);   // 00001110 (14)
    printf("XOR: %d\n", a ^ b);  // 00000110 (6)
    printf("NOT: %d\n", ~a);     // 11110011 (inverte)
    printf("Shift L: %d\n", a << 1); // 00011000 (24)
    printf("Shift R: %d\n", a >> 1); // 00000110 (6)
    
    return 0;
}