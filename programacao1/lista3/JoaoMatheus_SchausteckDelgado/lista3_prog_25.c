#include <stdio.h>

int main(void) {
    int f;
    float c;
    for (f=0;f<=150;f++) {
        c = (5.0 / 9.0) * (f - 32);
        printf("%d F = %.2f C\n", f, c);
    }
    return 0;
}
