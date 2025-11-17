#include <iostream>
#include "../Buffer/Buffer.h"

using namespace memoria;

int main()
{
    std::cout << "--- Exemplo RAII ---\n";

    {
        Buffer buf(5);
        buf.preencher(42);
        buf.imprimir();
    }

    std::cout << "--- Fim do Escopo ---\n";

    return 0;
}
