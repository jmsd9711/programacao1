#include <stdio.h>
#include <math.h>

double pi_aprox(){
    double pi,menos=0,soma=0, termos = 100;
    for(int i=1;i<=termos;i=i+4){
        soma += 1.00/pow(i,3);
    }
    for(int j=3;j<=termos;j=j+4){
        menos -= 1.00/pow(j,3);
    }
     pi=cbrt(32*(soma+menos));
     return pi;
}

int main() {
    printf("O valor de PI com 100 casas eh de:\n %lf",pi_aprox());
    return 0;
}
