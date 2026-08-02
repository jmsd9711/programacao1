#include <stdio.h>

int main(){

    int N;
    double saldo = 0.0, valor;
    int maiorSeq = 0, seqAtual = 0;

    printf("Quantidade de transacoes: ");
    scanf("%d", &N);

    for (int i = 0; i < N; i++){
        printf("Valor da transacao %d: ", i + 1);
        scanf("%lf", &valor);

        saldo += valor;                   // (a) saldo acumulado

        // (b) maior sequencia consecutiva com saldo estritamente positivo
        if (saldo > 0){
            seqAtual++;
            if (seqAtual > maiorSeq)
                maiorSeq = seqAtual;
        } else {
            seqAtual = 0;
        }
    }

    printf("Saldo final: %.2f\n", saldo);
    printf("Maior sequencia com saldo positivo: %d\n", maiorSeq);
    return 0;

}