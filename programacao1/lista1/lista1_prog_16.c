#include <stdio.h>

int main(){

    float meses, anos, dias;
    printf("Digite a quantidade de anos que a pessoa tem: ");
    scanf("%f",&anos);
    printf("Digite a quantidade de meses: ");
    scanf("%f", &meses);

    dias = (anos *365)+ (meses*30);

    printf("%f dias vividos",dias);

    return 0;

}