#include <stdio.h>
#include <math.h>

double newton_raphson(double S){
    double xk, xk1;
    if (S == 0.0)
        return 0.0;
    xk = S / 2.0;                         

    while (1){
        xk1 = 0.5 * (xk + S / xk);        
        if (fabs(xk1 - xk) < 0.0001){
            break;
        }   
        xk = xk1;                         
    }
    return xk1;
}

int main(){
    double S;

    printf("Digite um numero positivo S: ");
    scanf("%lf", &S);
    printf("A raiz quadrada de %.2f e aproximadamente %.5f.\n",S, newton_raphson(S));

    return 0;
}