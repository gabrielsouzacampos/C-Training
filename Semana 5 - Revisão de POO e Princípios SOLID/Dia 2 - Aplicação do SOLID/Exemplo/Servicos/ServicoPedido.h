#pragma once
#include "../Dominio/IImposto.h"
#include "../Dominio/INotificacao.h"
#include "../Dominio/ICobranca.h"
#include "../Dominio/IPersistenciaPedido.h"
#include "../Dominio/Pedido.h"

class ServicoPedido {
private:
    const IImposto& imposto;
    INotificacao& notificacao;
    ICobranca& cobranca;
    IPersistenciaPedido& persistencia;

public:
    ServicoPedido(
        const IImposto& imp,
        INotificacao& notif,
        ICobranca& cob,
        IPersistenciaPedido& repo);

    void processar(Pedido& p);
};
