#include "Recurso.h"

namespace dominio {
	Recurso::Recurso() {
		std::cout << "Recurso adquirido" << std::endl;
	}

	Recurso::~Recurso() {
		std::cout << "Recurso liberado" << std::endl;
	}

	void Recurso::usar() const {
		std::cout << "Usar..." << std::endl;
	}
}