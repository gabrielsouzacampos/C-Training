#pragma once
#include <iostream>

namespace memoria {
	class Buffer
	{
	private:
		int* dados;
		size_t tamanho;
	public:
		Buffer(size_t tamanho);
		~Buffer();

		void preencher(int valor);
		
		void imprimir() const;
	};
}