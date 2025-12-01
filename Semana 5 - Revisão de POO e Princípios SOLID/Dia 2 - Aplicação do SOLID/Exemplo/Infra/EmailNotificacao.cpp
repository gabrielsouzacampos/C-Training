#include "EmailNotificacao.h"
#include <iostream>

void EmailNotificacao::enviar(const Pedido& p) {
    std::cout << "[Email] Enviando e-mail para " << p.cliente
        << " sobre pedido " << p.id << " (R$ " << p.valor << ")\n";
}
