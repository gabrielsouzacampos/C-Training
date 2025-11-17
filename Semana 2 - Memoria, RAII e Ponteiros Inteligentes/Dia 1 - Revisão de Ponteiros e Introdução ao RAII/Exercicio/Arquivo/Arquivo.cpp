#include "Arquivo.h"
#include <iostream>

namespace arquivo {
	ArquivoTexto::ArquivoTexto(const std::string& caminho) : caminho(caminho) {
		escrita.open(caminho, std::ios::app);
		leitura.open(caminho);

		std::cout << "Arquivo abero: " << caminho << std::endl;
	}

	ArquivoTexto::~ArquivoTexto() {
		if (escrita.is_open()) escrita.close();
		if (leitura.is_open()) leitura.close();

		std::cout << "Arquivo fechado automaticamente." << std::endl;
	}

	void ArquivoTexto::escrever(const std::string& texto) {
		if (escrita.is_open()) {
			escrita << texto << std::endl;
		}
	}

	std::string ArquivoTexto::ler() {
		std::string linha, conteudo;

		while (std::getline(leitura, linha))
		{
			conteudo += linha + "\n";
		}

		return conteudo;
	}
}