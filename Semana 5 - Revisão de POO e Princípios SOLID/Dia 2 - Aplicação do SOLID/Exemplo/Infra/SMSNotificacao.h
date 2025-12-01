#pragma once
#include "../Dominio/INotificacao.h"

class SMSNotificacao : public INotificacao {
public:
    void enviar(const Pedido& p) override;
};
#pragma once
