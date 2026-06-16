#include <stdio.h>

int main(){

    float media;
    int faltas;
    printf("Digite a media e o numero de faltas: \n");
    scanf("%f %d", &media, &faltas);
    if(faltas > 20){
        printf("Reprovado por faltas");
    }else if(media >= 6.0){
        printf("Aprovado");
    }else{
        printf("Recuperacao");
    }
    return 0;
}