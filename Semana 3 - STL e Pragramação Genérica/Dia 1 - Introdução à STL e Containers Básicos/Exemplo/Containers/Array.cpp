#include "Array.h"
#include <array>
#include <iostream>

namespace stl_exemplos
{
	void exemploArray() {
		std::array<int, 3> valores = { 1, 2, 3 };

		for (int v : valores)
			std::cout << v << " ";

		std::cout << std::endl;
	}
}