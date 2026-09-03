#include <stdio.h>
#include <string.h>

int verificar_senha(const char *senha) {
    int i, tam;
    int todos_zeros = 1;
    int todos_iguais = 1;
    int crescente = 1;
    int decrescente = 1;

    if (senha == NULL) {
        return 0;
    }

    tam = (int)strlen(senha);

    if (tam != 6) {
        return 0;
    }

    for (i = 0; i < tam; i++) {
        if (senha[i] < '0' || senha[i] > '9') {
            return 0;
        }

        if (senha[i] != '0') {
            todos_zeros = 0;
        }

        if (i > 0 && senha[i] != senha[0]) {
            todos_iguais = 0;
        }

        if (i > 0) {
            if (senha[i] != senha[i - 1] + 1) {
                crescente = 0;
            }
            if (senha[i] != senha[i - 1] - 1) {
                decrescente = 0;
            }
        }
    }

    if (todos_zeros) {
        return 0;
    }

    if (todos_iguais) {
        return 0;
    }

    for (i = 1; i <= tam / 2; i++) {
        if (tam % i == 0) {
            int ok = 1;
            for (int j = i; j < tam; j++) {
                if (senha[j] != senha[j - i]) {
                    ok = 0;
                    break;
                }
            }
            if (ok) {
                return 0;
            }
        }
    }

    if (crescente || decrescente) {
        return 0;
    }

    return 1;
}

int main() {
    char senha[10];

    printf("Digite a senha numerica (6 digitos): ");
    scanf("%9s", senha);

    if (verificar_senha(senha)) {
        printf("Senha valida.\n");
    } else {
        printf("Senha invalida.\n");
    }

    return 0;
}