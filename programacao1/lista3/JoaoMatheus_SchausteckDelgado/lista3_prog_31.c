#include <stdio.h>

int main() {
    int a, b, f, i,qtd;
    printf("Digite o primeiro termo: \n");
    scanf("%d",&a);
    printf("Digite o segundo termo: \n");
    scanf("%d",&b);
    printf("Digite a Quantidade de termos: \n");
    scanf("%d",&qtd);

    printf("%d \n%d \n",a ,b);
    for(i = 1; i <= qtd; i++) {
        f = a + b;
        printf("%d\n", f);
        a = b;
        b = f;
    }

    return 0;
}