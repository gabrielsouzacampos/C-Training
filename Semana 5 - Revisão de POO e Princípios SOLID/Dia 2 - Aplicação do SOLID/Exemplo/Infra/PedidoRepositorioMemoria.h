#pragma once
#include "../Dominio/IPersistenciaPedido.h"
#include <vector>

class PedidoRepositorioMemoria : public IPersistenciaPedido {
private:
    std::vector<Pedido> storage;

public:
    void salvar(const Pedido& p) override;
    const std::vector<Pedido>& listar() const { return storage; }
};
