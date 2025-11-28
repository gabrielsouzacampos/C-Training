#include <iostream>
#include "../Catalogo/Catalogo.h"

constexpr double descontoPadrao(double preco) {
    return preco * 0.90;    // 10% off
}

int main() {

    Catalogo c;

    c.adicionar({ 101, "Teclado", 150 });
    c.adicionar({ 102, "Mouse", 80 });
    c.adicionar({ 103, "Monitor", 900 });

    std::cout << "\n--- Ordenado por Preço ---\n";
    c.ordenarPorPreco();

    std::cout << "\n--- Produtos acima de 100 ---\n";
    auto filtrados = c.filtrar([](const Produto& p) {
        return p.preco > 100;
        });

    for (const auto& p : filtrados)
        std::cout << p.nome << " - R$ " << p.preco << "\n";

    constexpr double precoTeste = descontoPadrao(200);
    std::cout << "\nDesconto constexpr (200 -> " << precoTeste << ")\n";

    return 0;
}
