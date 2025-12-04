#pragma once
#include "../Dominio/Pedido.h"
#include "../Dominio/IImposto.h"
#include "../Dominio/ICobranca.h"
#include "../Dominio/INotificacao.h"
#include "../Dominio/IPersistenciaPedido.h"
#include "../Dominio/Subject.h"

class ServicoPedido {
private:
    const IImposto& imposto;
    ICobranca& cobranca;
    INotificacao& notificacao;
    IPersistenciaPedido& persistencia;
    Subject eventos;

public:
    ServicoPedido(const IImposto& imp,
        ICobranca& cob,
        INotificacao& notif,
        IPersistenciaPedido& repo);

    void registrarObserver(IObserver* o) {
        eventos.registrar(o);
    }

    void processar(Pedido& p);
};
