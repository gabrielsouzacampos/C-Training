#include "Set.h"
#include <set>
#include <iostream>

namespace stl_assoc
{
	void exemploSet() {
		std::set<int> numeros = { 5,1,9,3,1 };

		for (int n : numeros)
			std::cout << n << " ";

		std::cout << std::endl;
	}
}
