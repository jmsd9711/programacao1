#include <stdio.h>
#include <math.h>

int main(){

    double S, xk, xk1;
    int iteracoes = 0;

    printf("Digite um numero positivo S: ");
    scanf("%lf", &S);

    xk = S / 2.0;                         // estimativa inicial x0

    while (1){
        xk1 = 0.5 * (xk + S / xk);        // formula de Newton-Raphson
        iteracoes++;

        if (fabs(xk1 - xk) < 0.0001)      // criterio de parada
            break;

        xk = xk1;                         // prepara a proxima iteracao
    }

    printf("Raiz aproximada: %.4f\n", xk1);
    printf("Quantidade de iteracoes: %d\n", iteracoes);
    return 0;

}