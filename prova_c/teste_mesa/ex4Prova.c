#include <stdio.h>

int main() {
    int p,r,n,soma,i,pg;
    printf("Digite o primeiro termo a raiz e a quantidade de termos: \n");
    scanf("%d %d %d",&p,&r,&n);
    pg = p*r;
    soma = p + (p*r);
    printf("%d\n%d\n",p,pg);
    for(i=n-2;i>=0;i--){
        pg = pg * r;
        printf("%d\n",pg);
        soma = soma + pg;
    }
    printf("A soma da PG foi de:%d",soma);
    return 0;
}
