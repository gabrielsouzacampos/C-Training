#include "ContaBancaria.h"
#include <iostream>

Banco::ContaBancaria::ContaBancaria(const std::string titular, double saldo) : titular(titular), saldo(saldo)
{
	std::cout << "Conta criada para: " << titular << std::endl;
}

Banco::ContaBancaria::~ContaBancaria()
{
	std::cout << "Conta encerrada." << std::endl;
}

void Banco::ContaBancaria::depositar(double valor)
{
	std::cout << "Deposito: " << valor << std::endl;

	saldo = saldo + valor;
}

void Banco::ContaBancaria::sacar(double valor)
{
	std::cout << "Saque: " << valor << std::endl;

	saldo = saldo - valor;
}

void Banco::ContaBancaria::exibirSaldo() const
{
	std::cout << "Saldo atual: " << saldo << std::endl;
}
