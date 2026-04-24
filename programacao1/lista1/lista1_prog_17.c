#include <stdio.h>

int main(){

    int meses, dia, dias;
    printf("Digite o dia de hoje: ");
    scanf("%d",&dia);
    printf("Digite o mes: ");
    scanf("%d",&meses);

    dias = ((meses-1)*30)+ dia;

    printf("%d dias desde o inicio do ano",dias);

    return 0;

}