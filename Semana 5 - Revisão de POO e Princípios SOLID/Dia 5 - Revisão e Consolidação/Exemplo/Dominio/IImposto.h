#pragma once

class IImposto {
public:
    virtual ~IImposto() = default;
    virtual double calcular(double valor) const = 0;
};
