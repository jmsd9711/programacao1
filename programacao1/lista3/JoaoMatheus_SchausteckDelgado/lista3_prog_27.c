#include <stdio.h>

int main() {
    int i;
    float a=0,b=1,c=1;
    for (i = 1; i <= 25; i++) {
        a += (b/c);
        b = b+2;
        c++;
    }
    printf("O valor de A eh: %f",a);
    return 0;
}
