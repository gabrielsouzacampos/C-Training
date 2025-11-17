#pragma once
#include <string>
#include <iostream>

namespace dominio {
	class Pessoa {
	private:
		std::string nome;
	public:
		Pessoa(const std::string& nome);
		~Pessoa();

		void falar() const;
	};
}