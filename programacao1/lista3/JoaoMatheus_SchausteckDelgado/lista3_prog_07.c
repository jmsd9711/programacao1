#include <stdio.h>

int main(){
    float n, v, media, i=0;
    while(1){
        printf("Digite um valor: \n");
        scanf("%f",&v);
        if(v<0){
            media = n/i;
            printf("A media dos valores eh de: %f",media);
            break;
        }   
        n = n + v;
        i++;
    }


    return 0;
}