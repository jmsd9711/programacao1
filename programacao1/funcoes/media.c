#include <stdio.h>

float calcular_media(float n1, float n2, float n3){
    return (n1+n2+n3)/3;
}
void verificar_situacao(float media){
    if(media>=7){
        printf("Aprovado\n");
    }else{
        printf("Reprovado\n");
    }
}

int main(void){
    float n1, n2, n3;
    float media;
    // scanf("%f %f %f",&n1,&n2,&n3);
    // media = calcular_media(n1,n2,n3);
    //media = calcular_media(7,8,9);
    // verificar_situacao(media);
    verificar_situacao(calcular_media(7,8,9));
    return 0;
}