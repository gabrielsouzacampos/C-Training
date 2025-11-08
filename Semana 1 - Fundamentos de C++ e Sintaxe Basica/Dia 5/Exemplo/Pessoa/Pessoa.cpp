#include "Pessoa.h"
#include <iostream>


namespace dominio {
	Pessoa::Pessoa(const std::string& nome, int idade) : nome(nome), idade(idade)
	{
		std::cout << "Pessoa Criada: " << nome << std::endl;
	}

	Pessoa::~Pessoa()
	{
		std::cout << "Pessoa Destruida: " << nome << std::endl;
	}

	void Pessoa::exibir() const
	{
		std::cout << "Nome: " << nome << ", Idade: " << idade << std::endl;
	}
}