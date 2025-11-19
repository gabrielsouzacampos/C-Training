#include "Algoritmos.h"
#include <vector>
#include <algorithm>
#include <iostream>
#include <numeric>

namespace stl_algo
{
	void exemploSort() {
		std::vector<int> numeros = { 5, 2, 9, 1, 5, 6 };

		std::sort(numeros.begin(), numeros.end());

		std::cout << "Números ordenados: ";

		for (int n : numeros)
			std::cout << n << " ";

		std::cout << std::endl;
	}

	void exemploFind() {
		std::vector<int> numeros = { 1, 2, 3, 4, 5 };

		auto it = std::find(numeros.begin(), numeros.end(), 3);
		
		if (it != numeros.end())
			std::cout << "Número encontrado: " << *it << std::endl;
		else
			std::cout << "Número não encontrado." << std::endl;
	}

	void exemploCountIf() {
		std::vector<int> numeros = { 1, 2, 3, 4, 5, 6 };
		
		int count = std::count_if(numeros.begin(), numeros.end(), [](int n) { return n % 2 == 0; });
	
		std::cout << "Números pares: " << count << std::endl;
	}

	void exemploTransform() {
		std::vector<int> numeros = { 1, 2, 3, 4, 5 };
	
		std::vector<int> resultados(numeros.size());
		
		std::transform(numeros.begin(), numeros.end(), resultados.begin(), [](int n) { return n * n; });
		
		std::cout << "Números ao quadrado: ";
		
		for (int n : resultados)
			std::cout << n << " ";
		
		std::cout << std::endl;
	}

	void exemploAccumulate() {
		std::vector<int> numeros = { 1, 2, 3, 4, 5 };
		
		int soma = std::accumulate(numeros.begin(), numeros.end(), 0);
		
		std::cout << "Soma dos números: " << soma << std::endl;
	}
}