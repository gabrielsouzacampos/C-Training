#pragma once
#include <string>

struct Produto {
	int codigo;
	std::string nome;
	double preco;

	Produto() = default;

	Produto(int c, std::string n, double p)
		: codigo(c), nome(std::move(n)), preco(p) {
	}
};
