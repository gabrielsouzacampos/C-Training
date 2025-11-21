#include <iostream>
#include "../Semana3/Estoque.h"
#include "../Semana3/FuncoesGenericas.h"
#include <vector>

int main()
{
	Estoque estoque;

	estoque.adicionar({ 101, "Caneta", 2.50 });
	estoque.adicionar({ 102, "Caderno", 22.50 });
	estoque.adicionar({ 103, "Borracha", 10.50 });

	std::cout << "\n--- Busca por Código ---\n";

	if (auto p = estoque.buscarPorCodigo(102))
		std::cout << p->nome << " encontrado: R$" << p->preco << "\n";

	std::cout << "\n--- Lista ordenada por preço ---\n";
	estoque.listarOrdenadoPorPreco();

	std::vector<int> valores = {10, 20, 30, 40};

	std::cout << "\n--- Soma de Valores: " << somaValores(valores) << "\n";

	return 0;
}
