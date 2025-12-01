#pragma once
#include "Pedido.h"

class IPersistenciaPedido {
public:
    virtual ~IPersistenciaPedido() = default;

    virtual void salvar(const Pedido& p) = 0;
};
