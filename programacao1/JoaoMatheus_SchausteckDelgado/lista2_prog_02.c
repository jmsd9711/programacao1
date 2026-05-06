#include <stdio.h>

int main(){

    int a,b,c,;
    printf("Digite os valores de A, B e C: \n");
    scanf("%d %d %d", &a, &b, &c);
    if(a + b < c){
        printf("A soma eh menor que C");
    }else if(a + b>c){
        printf("A soma eh maior que C");
    }else{
        printf("A soma eh igual a C");
    }
    return 0;
}