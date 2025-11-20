#include "../Generico/Caixa.h"
#include "../Generico/FuncoesGenericas.h"
#include "../Generico/Especializacoes.h"
#include <iostream>

int main() {
    Caixa<int> c1(10);
    Caixa<std::string> c2("Gabriel");

    imprimir(c1.obter());
    imprimir(c2.obter());

    std::cout << "Soma: " << soma(5, 7) << "\n";

    return 0;
}
