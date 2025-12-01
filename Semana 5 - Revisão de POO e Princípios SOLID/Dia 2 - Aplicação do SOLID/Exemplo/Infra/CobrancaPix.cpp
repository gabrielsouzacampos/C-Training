#include "CobrancaPix.h"
#include <iostream>

bool CobrancaPix::cobrar(const Pedido& p) {
    std::cout << "[PIX] Executando cobrança via PIX para " << p.cliente
        << " valor R$ " << p.valor << "\n";
    return true;
}
