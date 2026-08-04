#include <stdio.h>

int main() {
    double milho=1;
    int i;
    printf("%.2lf \n",milho);
    for(i=1;i<=64;i++){
        milho = milho * 2; 
        if(i==64){
            break;
        }
        printf("%.2lf \n",milho);
    }
    
    return 0;
}