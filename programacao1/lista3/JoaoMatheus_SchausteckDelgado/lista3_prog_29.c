#include <stdio.h>
#include <math.h>

int main() {
    double pi,menos=0,soma=0;
    int i,j,termos;
    printf("Digite a quantidade de casas para PI:\n");
    scanf("%d",&termos);
    for(i=1;i<=termos;i=i+4){
        soma += 1.00/pow(i,3);
    }
    for(j=3;j<=termos;j=j+4){
        menos -= 1.00/pow(j,3);
    }
    pi=cbrt(32*(soma+menos));
    printf("O valor de PI com %d casas eh de:\n %lf",termos,pi);
    return 0;
}
