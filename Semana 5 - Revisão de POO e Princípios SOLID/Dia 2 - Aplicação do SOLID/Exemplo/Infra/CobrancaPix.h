#pragma once
#include "../Dominio/ICobranca.h"

class CobrancaPix : public ICobranca {
public:
    bool cobrar(const Pedido& p) override;
};
