#include <stdio.h>

int main() {
    //resolvido em sala
    int n, s;
    int a, b;
    printf("Digite o primeiro termo: \n");
    scanf("%d",&a);
    printf("Digite o segundo termo: \n");
    scanf("%d",&b);
    printf("Digite a quantidade de termos: \n");
    scanf("%d",&n);

    printf("\n\n Imprimindo a serie: \n");
    printf("%d ",a);
    printf("%d ",b);
    for(int i = 3;i<=n;i++){
        if(i%2==1){
            s = a + b;
        }
        else{
            s = b - a;   
        }
        printf("%d ",s);
            a = b;
            b = s;
    }
    return 0;
}