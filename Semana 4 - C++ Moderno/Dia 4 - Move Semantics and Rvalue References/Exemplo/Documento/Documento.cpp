#include "Documento.h"
#include <iostream>

Documento::Documento(size_t tamanho, char c) : dados(tamanho, c) {}

Documento::Documento(const Documento& outro) : dados(outro.dados) {
	std::cout << "Cópia realizada.\n";
}

Documento::Documento(Documento&& outro) noexcept : dados(std::move(outro.dados)) {
	std::cout << "Movimentação realizada.\n";
}

void Documento::info() const {
	std::cout << "Tamanho do documento: " << dados.size() << " caracteres.\n";
}