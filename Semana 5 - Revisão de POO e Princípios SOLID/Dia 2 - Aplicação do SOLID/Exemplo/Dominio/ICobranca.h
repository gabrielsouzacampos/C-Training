#pragma once
#include "Pedido.h"

class ICobranca {
public:
    virtual ~ICobranca() = default;

    virtual bool cobrar(const Pedido& p) = 0;
};
