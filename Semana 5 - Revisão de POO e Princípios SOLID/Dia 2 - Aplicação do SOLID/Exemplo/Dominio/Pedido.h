#pragma once
#include <string>

struct Pedido {
    int id;
    double valor;
    std::string cliente;

    Pedido() = default;

    Pedido(int id_, double valor_, std::string cliente_)
        : id(id_), valor(valor_), cliente(std::move(cliente_)) {
    }
};
