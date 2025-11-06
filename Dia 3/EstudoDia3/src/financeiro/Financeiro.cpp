#include "financeiro/Financeiro.h"
#include <iostream>

namespace financeiro {
    double calcular_salario(double base, double bonus) {
        return base + bonus;
    }

    void exibir_resumo(double valor) {
        std::cout << "Salario total: R$" << valor << std::endl;
    }
}
