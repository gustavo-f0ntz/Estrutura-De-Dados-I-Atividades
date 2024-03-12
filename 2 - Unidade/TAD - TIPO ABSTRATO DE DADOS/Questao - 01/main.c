#include "contbanc.h"

int main() {
    ContaBancaria *conta1 = criarConta("Joao", 1234, 1000.0);
    ContaBancaria *conta2 = criarConta("Maria", 5678, 500.0);

    depositar(conta1, 500.0);
    transferir(conta1, conta2, 300.0);

    printf("Saldo da conta de Joao: %.2f\n", consultarSaldo(conta1));
    printf("Saldo da conta de Maria: %.2f\n", consultarSaldo(conta2));

    excluirConta(conta1);
    excluirConta(conta2);

    return 0;
}
