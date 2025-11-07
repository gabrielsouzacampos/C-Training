#pragma once
#include <string>

namespace Banco 
{
	class ContaBancaria 
	{
	private: 
		std::string titular;
		double saldo;

	public:
		ContaBancaria(const std::string titular, double saldo);

		~ContaBancaria();

		void depositar(double valor);

		void sacar(double valor);

		void exibirSaldo() const;
	};
}
