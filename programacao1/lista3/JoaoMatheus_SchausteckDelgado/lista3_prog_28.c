#include <stdio.h>

int main() {
    int n;
    float a=0,b=1;
    for (n = 1; n <= 30; n++) {
        a += (b/n);
        b = b+2;
    }
    printf("O valor de A eh: %f",a);
    return 0;
}
