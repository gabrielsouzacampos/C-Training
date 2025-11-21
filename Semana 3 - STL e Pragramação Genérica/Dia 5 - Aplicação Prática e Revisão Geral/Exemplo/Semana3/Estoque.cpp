#include "Estoque.h"
#include <algorithm>
#include <iostream>

void Estoque::adicionar(const Produto& produto) {
	produtos.push_back(produto);
	catalogo[produto.codigo] = produto;
}

const Produto* Estoque::buscarPorCodigo(int codigo) const {
	auto it = catalogo.find(codigo);

	if (it != catalogo.end())
		return &it->second;

	return nullptr;
}

void Estoque::listarOrdenadoPorPreco() const {
	std::vector<Produto> temp = produtos;

	std::sort(temp.begin(), temp.end(),
		[](const Produto& a, const Produto& b) {
			return a.preco < b.preco;
		});

	for (const auto& p : temp)
		std::cout << p.nome << " - R$ " << p.preco << "\n";
}