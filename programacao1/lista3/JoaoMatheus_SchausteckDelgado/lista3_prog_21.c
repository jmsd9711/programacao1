#include <stdio.h>

int main() {
    int p=3,i,n,pg,soma=0;
    printf("Digite a quantidade de termos da PG: \n");
    scanf("%d",&n);
    pg = p;
    for(i=1;i<=n;i++){
        printf("%d \n",pg);
        soma += pg;
        pg = p*pg;

    }
    printf("A soma da PG eh: %d", soma);
    return 0;
}