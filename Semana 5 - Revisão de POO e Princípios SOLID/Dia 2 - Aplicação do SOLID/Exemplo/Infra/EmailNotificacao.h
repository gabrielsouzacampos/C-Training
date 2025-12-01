#pragma once
#include "../Dominio/INotificacao.h"
#include <string>

class EmailNotificacao : public INotificacao {
public:
    void enviar(const Pedido& p) override;
};
