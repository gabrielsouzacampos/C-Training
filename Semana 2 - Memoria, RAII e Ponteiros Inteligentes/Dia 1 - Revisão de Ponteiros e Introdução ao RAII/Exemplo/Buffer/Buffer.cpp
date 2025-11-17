#include "Buffer.h"

namespace memoria {
	Buffer::Buffer(size_t tamanho) : tamanho(tamanho) {
		dados = new int[tamanho];
		std::cout << "Buffer de " << tamanho << " elementos criado." << std::endl;
	}

	Buffer::~Buffer() {
		delete[] dados;
		std::cout << "Buffer destruido e memória liberada." << std::endl;
	}

	void Buffer::preencher(int valor) {
		for (size_t i = 0; i < tamanho; i++)
			dados[i] = valor;
	}

	void Buffer::imprimir() const {
		for (size_t i = 0; i < tamanho; i++)
			std::cout << dados[i] << " ";
		std::cout << std::endl;
	}
}