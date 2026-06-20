#include <stdio.h>

int main(){
    int n,i,z=0,m;
    printf("Digite um natural N:\n");
    scanf("%d",&n);
    printf("Digite um natural I:\n");
    scanf("%d",&i);
    if(i==0 || i<0 || n<0){
        printf("N e I devem ser naturais, sendo I diferente de 0");
    }
        m=i;
    while(z<6){
        printf("%d \n", m);
        m+=i;
        z++;
    }
    return 0;
}
