#include "ServicoPedido.h"
#include <iostream>

ServicoPedido::ServicoPedido(
    const IImposto& imp,
    INotificacao& notif,
    ICobranca& cob,
    IPersistenciaPedido& repo)
    : imposto(imp), notificacao(notif), cobranca(cob), persistencia(repo) {
}

void ServicoPedido::processar(Pedido& p) {
    double taxa = imposto.calcular(p.valor);
    p.valor += taxa;

    std::cout << "[ServicoPedido] Valor após imposto: R$ " << p.valor << "\n";

    if (cobranca.cobrar(p)) {
        persistencia.salvar(p);
        notificacao.enviar(p);
    }
    else {
        std::cout << "[ServicoPedido] Falha na cobrança do pedido " << p.id << "\n";
    }
}
