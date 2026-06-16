#include <stdio.h>

int main(){

    int s=0, i=85;
    while(i<=107){
        printf("%d \n", i);
        s = s + i;
        i++;
    }
    printf("%d", s);
    return 0;
}