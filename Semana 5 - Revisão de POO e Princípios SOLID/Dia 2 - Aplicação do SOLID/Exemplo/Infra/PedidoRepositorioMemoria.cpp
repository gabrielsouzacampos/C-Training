#include "PedidoRepositorioMemoria.h"
#include <iostream>

void PedidoRepositorioMemoria::salvar(const Pedido& p) {
    storage.push_back(p);
    std::cout << "[RepoMemoria] Pedido " << p.id << " salvo em memória\n";
}
