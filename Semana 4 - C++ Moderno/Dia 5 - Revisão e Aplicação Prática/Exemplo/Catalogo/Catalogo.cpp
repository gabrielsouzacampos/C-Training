#include "Catalogo.h"
#include <algorithm>
#include <iostream>

void Catalogo::adicionar(Produto p) {
    indice[p.codigo] = p;
    produtos.push_back(std::move(p));
}

const Produto* Catalogo::buscar(int codigo) const {
    auto it = indice.find(codigo);
    if (it != indice.end())
        return &it->second;
    return nullptr;
}

std::vector<Produto> Catalogo::filtrar(std::function<bool(const Produto&)> pred) const {
    std::vector<Produto> resultado;
    resultado.reserve(produtos.size());

    for (const auto& p : produtos)
        if (pred(p))
            resultado.push_back(p);

    return resultado;
}

void Catalogo::ordenarPorPreco() const {
    auto copia = produtos;

    std::sort(copia.begin(), copia.end(),
        [](const Produto& a, const Produto& b) {
            return a.preco < b.preco;
        });

    for (const auto& p : copia)
        std::cout << p.nome << " - R$ " << p.preco << "\n";
}
