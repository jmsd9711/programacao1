#include <stdio.h>

int main(){
    float p,i;
    for(i=1;i<=20;i++){
        p = i *2.54;
        printf("%.0f pol %.2f cm\n",i,p);
    }

    return 0;
}