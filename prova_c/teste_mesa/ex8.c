#include <stdio.h>

int main() {
    int x = 16;//10000
    if ((x & (x - 1)) == 0)//15 = 01111 // 16 & 15 = 00000 == 0
        printf("potencia de 2\n");
    else
        printf("nao e potencia\n");

    int y = 18;//10010
    if ((y & (y - 1)) == 0)//10001 // 18 & 17 = 1000 != 0
        printf("potencia de 2\n");
    else
        printf("nao e potencia\n");
    return 0;
}
