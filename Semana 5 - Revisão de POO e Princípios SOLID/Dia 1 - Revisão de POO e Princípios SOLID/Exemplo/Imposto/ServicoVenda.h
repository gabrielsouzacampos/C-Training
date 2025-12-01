#pragma once
#include "IImposto.h"

class ServicoVenda {
private:
	const IImposto* imposto;

public:
	ServicoVenda(IImposto* imposto) : imposto(imposto) {}

	double calcularImposto(double valor) const {
		return imposto->calcular(valor);
	}
};
