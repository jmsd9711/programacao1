#include <stdio.h>

int main(){

    int N, num, anterior;
    int maiorSeq = 0, seqAtual = 0;

    printf("Digite N: ");
    scanf("%d", &N);

    for (int i = 0; i < N; i++){
        scanf("%d", &num);

        if (i == 0){                      // primeiro elemento
            seqAtual = 1;
            maiorSeq = 1;
        } else {
            if (num > anterior){          // continua a sequencia crescente
                seqAtual++;
                if (seqAtual > maiorSeq)
                    maiorSeq = seqAtual;
            } else {                      // quebrou: recomeca do 1
                seqAtual = 1;
            }
        }
        anterior = num;
    }

    printf("Maior subsequencia crescente: %d\n", maiorSeq);
    return 0;

}