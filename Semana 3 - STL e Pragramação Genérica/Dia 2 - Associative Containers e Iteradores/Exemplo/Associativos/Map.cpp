#include "Map.h"
#include <map>
#include <string>
#include <iostream>

namespace stl_assoc
{
	void exemploMap() {
		std::map<std::string, int> pontuacao = {
			{"Gabriel", 100},
			{"Ana", 100},
			{"João", 100},
		};

		for (const auto& par : pontuacao)
			std::cout << par.first << " -> " << par.second << "\n";

		std::cout << std::endl;
	}
}