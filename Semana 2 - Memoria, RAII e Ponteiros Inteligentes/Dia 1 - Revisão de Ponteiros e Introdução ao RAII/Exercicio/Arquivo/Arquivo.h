#pragma once
#include <string>
#include <fstream>

namespace arquivo {
	class ArquivoTexto {
	private:
		std::string caminho;
		std::ofstream escrita;
		std::ifstream leitura;

	public:
		ArquivoTexto(const std::string& caminho);

		~ArquivoTexto();

		void escrever(const std::string& texto);

		std::string ler();
	};
}
