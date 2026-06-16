#include <stdio.h>

int main(){

    float p, a, imc;
    printf("Digite o peso e a altura: \n");
    scanf("%f %f", &p, &a);
    imc = p / (a * a);
    if(imc > 30){
        printf("Obeso");
    }else{
        printf("Nao obeso");
    }
    return 0;
}