#include <iostream>

// Dominio
#include "../Dominio/Pedido.h"
#include "../Dominio/IImposto.h"

// Infra
#include "../Infra/ImpostoSimples.h"
#include "../Infra/EmailNotificacao.h"
#include "../Infra/PushNotificacao.h"
#include "../Infra/SMSNotificacao.h"
#include "../Infra/CobrancaPix.h"
#include "../Infra/PedidoRepositorioMemoria.h"

// Servicos
#include "../Servicos/ServicoPedido.h"

int main() {
    ImpostoSimples imposto;

    EmailNotificacao email;
    PushNotificacao push;
    SMSNotificacao sms;

    CobrancaPix cobrancaPix;
    PedidoRepositorioMemoria repoMem;

    // Cenário 1: Email + PIX
    {
        std::cout << "=== Cenário 1: Email + PIX ===\n";
        ServicoPedido servico(imposto, email, cobrancaPix, repoMem);
        Pedido p{ 1, 200.0, "Gabriel" };
        servico.processar(p);
    }

    // Cenário 2: Push + PIX
    {
        std::cout << "\n=== Cenário 2: Push + PIX ===\n";
        ServicoPedido servico(imposto, push, cobrancaPix, repoMem);
        Pedido p{ 2, 150.0, "Ana" };
        servico.processar(p);
    }

    // Cenário 3: SMS + PIX
    {
        std::cout << "\n=== Cenário 3: SMS + PIX ===\n";
        ServicoPedido servico(imposto, sms, cobrancaPix, repoMem);
        Pedido p{ 3, 50.0, "João" };
        servico.processar(p);
    }

    std::cout << "\nPedidos salvos em memória: " << repoMem.listar().size() << "\n";
    return 0;
}
