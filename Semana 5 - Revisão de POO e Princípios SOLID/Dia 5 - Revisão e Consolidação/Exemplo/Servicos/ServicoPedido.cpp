#include "ServicoPedido.h"
#include <iostream>

ServicoPedido::ServicoPedido(const IImposto& imp,
    ICobranca& cob,
    INotificacao& notif,
    IPersistenciaPedido& repo)
    : imposto(imp), cobranca(cob), notificacao(notif), persistencia(repo) {
}

void ServicoPedido::processar(Pedido& p) {
    p.valor += imposto.calcular(p.valor);

    if (cobranca.cobrar(p)) {
        persistencia.salvar(p);
        notificacao.enviar(p);

        eventos.notificar("Pedido processado: " + std::to_string(p.id));
    }
}
