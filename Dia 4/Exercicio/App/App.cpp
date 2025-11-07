
#include "../Banco/ContaBancaria.h"

int main()
{
	Banco::ContaBancaria conta("Gabriel", 0);

	conta.depositar(1000);
	conta.sacar(200);
	conta.exibirSaldo();

	return 0;
}
