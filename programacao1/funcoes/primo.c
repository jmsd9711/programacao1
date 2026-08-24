#include <stdio.h>

int primo(int x){
    for(int i=2;i<=x/2;i++){
        if(x%i==0){
          return 0;  
        }
    }
    return 1;
}

int main(){
    int x;
    scanf("%d",&x);
    if(primo(x)==1){
        printf("%d eh um numero primo",x);
    }else{
        printf("%d nao eh primo",x);
    }
    return 0;
}