#include <stdio.h>

int main(){

    int n1,n2;
    printf("Digite dois valores: \n");
    scanf("%d %d", &n1, &n2);
    if(n1>n2){
        printf("%d %d", n2, n1);
    }else{
        printf("%d %d", n1, n2);
    }
    return 0;
}