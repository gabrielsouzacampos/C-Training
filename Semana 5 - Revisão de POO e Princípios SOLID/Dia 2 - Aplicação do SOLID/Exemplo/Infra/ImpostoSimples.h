#pragma once
#include "../Dominio/IImposto.h"

class ImpostoSimples : public IImposto {
public:
    double calcular(double valor) const override;
};
