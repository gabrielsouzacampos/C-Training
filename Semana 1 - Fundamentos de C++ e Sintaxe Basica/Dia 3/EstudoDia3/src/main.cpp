#include "financeiro/Financeiro.h"

int main() {
    double salario = financeiro::calcular_salario(3000.0, 750.0);
    financeiro::exibir_resumo(salario);
    return 0;
}
