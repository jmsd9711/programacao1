#include <stdio.h>

int main() {
    float menos=0,soma=0,a;
    int i;
    for(i=2;i<=30;i++){
        if(i%2==1){
            menos -= 1.0/i;
        }
        if(i%2==0){
            soma += 1.0/i;
        }
    }
    a=soma+menos;
    printf("O valor de A eh: %f",a);
    return 0;
}
