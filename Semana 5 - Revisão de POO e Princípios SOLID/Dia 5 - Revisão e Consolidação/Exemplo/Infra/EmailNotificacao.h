#pragma once
#include "../Dominio/INotificacao.h"
#include <iostream>

class EmailNotificacao : public INotificacao {
public:
    void enviar(const Pedido& p) override {
        std::cout << "[Email] Enviando email para " << p.cliente << "\n";
    }
};
