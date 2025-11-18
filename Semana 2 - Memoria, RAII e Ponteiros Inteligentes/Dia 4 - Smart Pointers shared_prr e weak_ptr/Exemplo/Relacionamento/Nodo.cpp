#include "Nodo.h"

namespace graph {
	Nodo::Nodo(const std::string& nome) : nome(nome) {
		std::cout << "Nodo criado: " << nome << std::endl;
	}

	Nodo::~Nodo() {
		std::cout << "Nodo destruido: " << nome << std::endl;
	}

	void Nodo::info() const {
		std::cout << "Nodo: " << nome << std::endl;

		if (auto ant = anterior.lock()) 
			std::cout << "Anterior: " << ant->nome << std::endl;
		else 
			std::cout << "Anterior: (nenhum)" << std::endl;
		
		if (proximo)
			std::cout << "Proximo: " << proximo->nome << std::endl;
		else 
			std::cout << "Proximo: (nenhum)" << std::endl;
	}
}