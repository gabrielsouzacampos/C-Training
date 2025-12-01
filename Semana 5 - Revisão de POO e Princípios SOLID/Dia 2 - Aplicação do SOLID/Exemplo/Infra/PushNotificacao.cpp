#include "PushNotificacao.h"
#include <iostream>

void PushNotificacao::enviar(const Pedido& p) {
    std::cout << "[Push] Notificação push enviada para " << p.cliente
        << " sobre pedido " << p.id << "\n";
}
