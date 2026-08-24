#include <stdio.h>

int fat(int x){
    int f=1;
    for(int i=x;i>1;i--){
        f = f * i;
    }
    return f;
}

int main(){
    printf("%d \n",fat(6));
    printf("%d \n",fat(5));
    printf("%d \n",fat(3));
    return 0;
}