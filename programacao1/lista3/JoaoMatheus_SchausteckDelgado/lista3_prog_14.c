#include <stdio.h>

int main(){
    int n1,n2,m,i;
    printf("Digite dois valores:\n");
    scanf("%d %d",&n1,&n2);
    for(i=1;i<=n2;i++){
        m = m + n1;
        printf("%d\n",m);
    }
    printf("o Resultado da multiplicacao eh: %d",m);
    return 0;
}