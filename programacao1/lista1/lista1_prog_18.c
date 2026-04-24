#include <stdio.h>

int main(){

    float a,b,c,d, x, y, z;
    printf("Digite o valor de a: ");
    scanf("%f",&a);
    printf("Digite o valor de b: ");
    scanf("%f",&b);
    printf("Digite o valor de c: ");
    scanf("%f",&c);
    printf("Digite o valor de d: ");
    scanf("%f",&d);

    x=(a/(b*b))/((2*a-3*b)/((4*(a*a)-3)*(4*(a*a)-3)*(4*(a*a)-3)));
    y=((b*-1)-(b*b*b)-(4*a*c)+(2*(a*a)))/((2*a)/((b+1)*(b+1)));
    z=((b/(a+c))+4*a)/((d-2*a)/(3+c));
    printf("O resultado td expressao e a: %f da expressao A e: %f e da expressao C e: %f",z,y,x);
    return 0;
}