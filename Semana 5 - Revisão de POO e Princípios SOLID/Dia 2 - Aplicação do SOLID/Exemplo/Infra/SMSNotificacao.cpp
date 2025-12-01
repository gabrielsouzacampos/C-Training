#include "SMSNotificacao.h"
#include <iostream>

void SMSNotificacao::enviar(const Pedido& p) {
    std::cout << "[SMS] Enviando SMS para " << p.cliente
        << " sobre pedido " << p.id << " (R$ " << p.valor << ")\n";
}
