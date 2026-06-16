#include <stdio.h>

int main() {
    float mlocais, locais, minter, inter, total;
    printf("digite a quantidade de minutos locais e a quantidade de minutos interurbanos: \n");
    scanf("%f %f", &mlocais,&minter);
    printf("valor da assinatura: 29.90\n");
    if(mlocais>90){
        locais= (mlocais -90)*0.2;
        printf("valor minutos locais: %f \n",locais);
    }if(minter>30){
        inter = (minter - 30)*0.4;
        printf("valor minutos interurbanos:%f \n", inter);
    }
    total = locais+ inter+ 29.9;
    printf("valor total da conta: %f\n",total);
    return 0;
}
