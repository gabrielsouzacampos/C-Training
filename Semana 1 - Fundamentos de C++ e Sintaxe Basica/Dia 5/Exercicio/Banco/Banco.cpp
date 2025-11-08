#include "Banco.h"
#include <iostream>

namespace Banco 
{
	ContaBancaria::ContaBancaria(std::string titular, double saldo) : titular(titular), saldo(saldo)
	{
		std::cout << "Conta criada para: " << titular << std::endl;
	}
	
	ContaBancaria::~ContaBancaria()
	{
		std::cout << "Conta encerrada para: " << titular << std::endl;
	}

	void ContaBancaria::exibirSaldo() const
	{
		std::cout << "Saldo Atual: " << saldo << std::endl;
	}
}