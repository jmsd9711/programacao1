#include <stdio.h>

int main(){
    int in, n1,n2;
    printf("Digite um valor: \n");
    scanf("%d",&n1);
    printf("Digite outro valor: \n");
    scanf("%d",&n2);
    for(in = n1+1; in<n2;in++){
        if(in%2==0){
            printf("%d \n",in);
        }
    }

    return 0;
}