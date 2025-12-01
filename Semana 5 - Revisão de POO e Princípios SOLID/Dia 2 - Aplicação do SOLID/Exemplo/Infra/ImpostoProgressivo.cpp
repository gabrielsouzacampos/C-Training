#include "../Dominio/IImposto.h"

class ImpostoProgressivo : public IImposto {
public:
    double calcular(double valor) const override {
        return valor < 500 ? valor * 0.05 : valor * 0.15;
    }
};
