#pragma once
#include "../Dominio/ICobranca.h"
#include <iostream>

class CobrancaCartao : public ICobranca {
public:
    bool cobrar(const Pedido& p) override {
        std::cout << "[CobrancaCartao] Cobrando R$ " << p.valor << "\n";
        return true;
    }
};
