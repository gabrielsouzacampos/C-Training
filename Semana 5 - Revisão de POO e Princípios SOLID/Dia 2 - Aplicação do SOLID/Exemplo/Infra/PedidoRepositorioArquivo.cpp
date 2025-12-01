#include "../Dominio/IPersistenciaPedido.h"
#include <iostream>

class PedidoRepositorioArquivo : public IPersistenciaPedido {
public:
    void salvar(const Pedido& p) override {
        std::cout << "Salvando pedido em arquivo\n";
    }
};
