#include "../Dominio/ICobranca.h"
#include <iostream>

class CobrancaCartao : public ICobranca {
public:
    bool cobrar(const Pedido& p) override {
        std::cout << "Cobrando cartão do cliente\n";
        return true;
    }
};
