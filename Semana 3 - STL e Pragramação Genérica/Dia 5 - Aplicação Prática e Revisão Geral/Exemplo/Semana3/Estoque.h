#pragma once
#include <vector>
#include "Produto.h"
#include <map>

class Estoque {
private:
	std::vector<Produto> produtos;
	std::map<int, Produto> catalogo;

public:
	void adicionar(const Produto& produto);

	const Produto* buscarPorCodigo(int codigo) const;

	void listarOrdenadoPorPreco() const;
};
