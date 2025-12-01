#pragma once

class IImposto {
public:
	virtual ~IImposto() {}
	virtual double calcular(double valor) const = 0;
};
