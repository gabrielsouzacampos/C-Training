#include "Post.h"
#include <iostream>

namespace Sistema
{
	Post::Post(const std::string& texto) : conteudo(texto) {
		std::cout << "Post criado com conteudo: " << conteudo << std::endl;
	}

	Post::~Post() {
		std::cout << "Post destruido." << std::endl;
	}

	void Post::exibir() const {
		std::cout << "Conteudo do Post: " << conteudo << std::endl;
	}
}