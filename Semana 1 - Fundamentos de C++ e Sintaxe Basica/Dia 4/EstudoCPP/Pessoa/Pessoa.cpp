#include "Pessoa.h";
#include <iostream>

namespace dominio {
	Pessoa::Pessoa(const std::string& nome, int idade) : nome(nome), idade(idade) 
	{
		std::cout << "Pessoa criada: " << this->nome << std::endl;
	}

	Pessoa::~Pessoa() 
	{
		std::cout << "Pessoa destruida: " << this->nome << std::endl;
	}

	void Pessoa::Exibir() const
	{
		std::cout << "Nome: " << nome << ", Idade: " << idade << std::endl;
	}

	void Pessoa::Envelhecer() 
	{
		idade++;
	}
}