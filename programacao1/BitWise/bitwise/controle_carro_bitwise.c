    #include <stdio.h>

    // Definição das posições dos bits (Flags)
    #define BIT_FAROL      0  // Bit 0: Faróis (1 = Ligado, 0 = Desligado)
    #define BIT_AR_COND    1  // Bit 1: Ar Condicionado
    #define BIT_TRAVA      2  // Bit 2: Trava Elétrica
    #define BIT_ALARME     3  // Bit 3: Sistema de Alarme

    // Função auxiliar para exibir o estado atual em formato binário simples
    void exibir_estado(unsigned char reg) {
        printf("Estado atual do registro: ");
        for (int i = 7; i >= 0; i--) {
            printf("%d", (reg >> i) & 1);
        }
        printf(" (Decimal: %d)\n\n", reg);
    }

    int main() {
        // Inicializa o registro com todos os sistemas desligados (00000000)
        unsigned char status_carro = 0;
        printf("--- Inicio: Todos os sistemas desligados ---\n");
        exibir_estado(status_carro);

        // 1. LIGAR UM BIT (Set)
        // Ativa os Faróis (Bit 0) e as Travas (Bit 2)
        printf("[Acao] Ligando os farois e travando as portas...\n");
        status_carro |= (1 << BIT_FAROL);
        status_carro |= (1 << BIT_TRAVA);
        exibir_estado(status_carro); // Esperado: 00000101

        // 2. VERIFICAR UM BIT (Test)
        // Verifica se o Ar Condicionado (Bit 1) está ativo
        printf("[Acao] Verificando se o Ar Condicionado esta ligado...\n");
        if (status_carro & (1 << BIT_AR_COND)) {
            printf("-> Resultado: O Ar Condicionado esta LIGADO.\n\n");
        } else {
            printf("-> Resultado: O Ar Condicionado esta DESLIGADO.\n\n");
        }

        // 3. ALTERNAR UM BIT (Toggle)
        // Inverte o estado do Alarme (Bit 3) de desligado para ligado
        printf("[Acao] Alternando o estado do Alarme...\n");
        status_carro ^= (1 << BIT_ALARME);
        exibir_estado(status_carro); // Esperado: 00001101

        // 4. DESLIGAR UM BIT (Clear)
        // Desativa as Travas Elétricas (Bit 2) mantendo os outros bits intactos
        printf("[Acao] Destravando as portas...\n");
        status_carro &= ~(1 << BIT_TRAVA);
        exibir_estado(status_carro); // Esperado: 00001001

        // Nova verificação após as modificações
        printf("[Acao] Verificando novamente se o Alarme esta ativo...\n");
        if (status_carro & (1 << BIT_ALARME)) {
            printf("-> Resultado: O Alarme esta LIGADO.\n");
        } else {
            printf("-> Resultado: O Alarme esta DESLIGADO.\n");
        }

        return 0;
    }