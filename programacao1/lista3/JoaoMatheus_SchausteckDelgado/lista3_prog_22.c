#include <stdio.h>

int main() {
    float anaceleto=1.5, felisberto=1.1, ano=0;
    while(anaceleto!=felisberto){
        anaceleto+=0.02;
        anaceleto+=0.03;
        ano++;
    }
    printf("Foram necessarios %f anos para que os dois ficassem com a mesma altura",ano);
    return 0;
}