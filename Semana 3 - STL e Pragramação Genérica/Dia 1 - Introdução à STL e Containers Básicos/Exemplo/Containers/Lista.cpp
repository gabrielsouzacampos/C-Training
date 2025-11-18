#include "Lista.h"
#include <list>
#include <iostream>

namespace stl_exemplos
{
	void exemploList() {
		std::list<int> valores;
		valores.push_back(10);
		valores.push_back(5);
		valores.push_back(20);

		for (int v : valores)
			std::cout << v << " ";

		std::cout << std::endl;
	}
}