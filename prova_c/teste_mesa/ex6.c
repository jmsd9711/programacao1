#include <stdio.h>

int main() {
    int i, j;
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            if (j == 1)
                break;
            printf("%d%d ", i, j);
        }
    }
    printf("\n");
    return 0;
}
