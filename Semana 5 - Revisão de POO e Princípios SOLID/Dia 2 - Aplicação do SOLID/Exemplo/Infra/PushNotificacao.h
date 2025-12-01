#pragma once
#include "../Dominio/INotificacao.h"

class PushNotificacao : public INotificacao {
public:
    void enviar(const Pedido& p) override;
};
