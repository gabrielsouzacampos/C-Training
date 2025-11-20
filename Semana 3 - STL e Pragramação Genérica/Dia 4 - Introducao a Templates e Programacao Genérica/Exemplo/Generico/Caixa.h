#pragma once

template<typename T>
class Caixa {
private:
    T valor;

public:
    Caixa(T v) : valor(v) {}

    T obter() const {
        return valor;
    }

    void definir(const T& novoValor) {
        valor = novoValor;
    }
};
