#include <iostream>
#include <Banco.h>

using namespace Banco;

int main()
{
    ContaBancaria conta1("Gabriel", 1000.0);
    conta1.exibirSaldo();

    ContaBancaria* conta2 = new ContaBancaria("Maria", 2000.0);
    conta2->exibirSaldo();
    delete conta2;

    auto conta3 = std::make_unique<ContaBancaria>("João", 3000.0);
    conta3->exibirSaldo();
}
