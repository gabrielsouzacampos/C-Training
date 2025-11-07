#pragma once
#include <string>

namespace dominio {
	class Pessoa {
	private:
		std::string nome;
		int idade;

	public:
		Pessoa(const std::string& nome, int idade);

		~Pessoa();

		void exibir() const;
	};
}