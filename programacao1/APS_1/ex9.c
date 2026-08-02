#include <stdio.h>

int main(){

    int A, B;

    printf("Digite A e B (A < B): ");
    scanf("%d %d", &A, &B);

    printf("Numeros de Armstrong em [%d, %d]:\n", A, B);

    for (int n = A; n <= B; n++){

        // conta a quantidade k de digitos
        int temp = n, k = 0;
        do {
            k++;
            temp /= 10;
        } while (temp > 0);

        // soma dos digitos elevados a k
        temp = n;
        long soma = 0;
        do {
            int d = temp % 10;
            int potencia = 1;
            for (int i = 0; i < k; i++)
                potencia *= d;
            soma += potencia;
            temp /= 10;
        } while (temp > 0);

        if (soma == n)
            printf("%d\n", n);
    }

    return 0;

}