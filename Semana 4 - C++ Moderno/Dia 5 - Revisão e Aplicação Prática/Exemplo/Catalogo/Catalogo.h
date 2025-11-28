#pragma once
#include "Produto.h"
#include <vector>
#include <map>
#include <functional>

class Catalogo {
private:
    std::vector<Produto> produtos;
    std::map<int, Produto> indice;

public:
    void adicionar(Produto p);

    const Produto* buscar(int codigo) const;

    std::vector<Produto> filtrar(std::function<bool(const Produto&)> pred) const;

    void ordenarPorPreco() const;
};
