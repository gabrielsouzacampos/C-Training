#include "Pessoa.h"

namespace dominio {
	Pessoa::Pessoa(const std::string& nome) : nome(nome) {
		std::cout << "Pessoa criada: " << nome << std::endl;
	}

	Pessoa::~Pessoa() {
		std::cout << "Pessoa destruida: " << nome << std::endl;
	}

	void Pessoa::falar() const {
		std::cout << nome << " diz: Olá!" << std::endl;
	}
}