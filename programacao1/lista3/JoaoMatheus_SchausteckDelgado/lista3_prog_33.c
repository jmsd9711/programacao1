#include <stdio.h>
#include <math.h>

int main() {
    //resolvido em sala
    int n;
    int base=8;
    int dec = 0;
    int pos = 0;
    printf("Digite um valor: \n");
    scanf("%d",&n);
    int n_c=n;
    while(n_c>0){
        int a = n_c%10;
        if(a>=base){
            printf("Invalido");
            return -1;
        }
        dec += a*pow(base,pos);
        pos += 1;
        n_c = n_c/10;
    }
    printf("O valor octal:%d em decimal eh de:%d",n,dec);
    return 0;

}