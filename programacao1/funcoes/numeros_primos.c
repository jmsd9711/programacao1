#include <stdio.h>

int primo(int x){
    if(x<2){
        return 0;
    }
    for(int i=2;i<=x/2;i++){
        if(x%i==0){
          return 0;  
        }
    }
    return 1;
}

int main(){
    for(int i=0;i<=1000;i++){
        if(primo(i)==1){
            printf("%d \n",i);
        }
    }
    
    return 0;
}