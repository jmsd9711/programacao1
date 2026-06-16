#include <stdio.h>

int main(){
    int n=0, i;
    for(i=0;i<=100;i++){
        printf("%d %d \n ",n,i);
        n = n + i;
    }
    
    return 0;
}