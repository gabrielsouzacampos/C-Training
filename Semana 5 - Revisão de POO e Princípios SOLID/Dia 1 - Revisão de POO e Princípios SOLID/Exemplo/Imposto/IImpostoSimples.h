#pragma once
#include "IImposto.h"

class IImpostoSimples : public IImposto {
	public:
		double calcular(double valor) const override;
};
