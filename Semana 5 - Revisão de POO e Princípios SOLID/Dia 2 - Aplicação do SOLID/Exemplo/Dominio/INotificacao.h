#pragma once
#include "Pedido.h"

class INotificacao {
public:
    virtual ~INotificacao() = default;

    virtual void enviar(const Pedido& p) = 0;
};
