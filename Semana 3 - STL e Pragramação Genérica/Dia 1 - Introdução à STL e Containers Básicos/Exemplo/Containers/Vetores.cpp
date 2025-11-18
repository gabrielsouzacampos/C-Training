#include "Vetores.h"
#include <vector>
#include <iostream>

namespace stl_exemplos
{
	void exemploVector() {
		std::vector<int> valores = { 10, 20, 30 };
		valores.push_back(40);

		for (int v : valores)
			std::cout << v << " ";

		std::cout << std::endl;
	}
}