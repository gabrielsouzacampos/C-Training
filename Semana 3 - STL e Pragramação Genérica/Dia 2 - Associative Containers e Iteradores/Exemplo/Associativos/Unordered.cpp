#include "Unordered.h"
#include <unordered_map>
#include <string>
#include <iostream>

namespace stl_assoc
{
	void exemploUnorderedMap() {
		std::unordered_map<std::string, int> estoque = {
			{ "café", 5 },
			{ "pão", 12 },
			{ "leite", 8 },
		};

		for (const auto& par : estoque)
			std::cout << par.first << " -> " << par.second << "\n";

		std::cout << std::endl;
	}
}