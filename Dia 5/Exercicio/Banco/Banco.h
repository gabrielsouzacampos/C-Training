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
		ContaBancaria(std::string titular, double saldo);

		~ContaBancaria();

		void exibirSaldo() const;
	};

}