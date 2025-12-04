#include "../Infra/ImpostoSimples.h"
#include "../Infra/CobrancaCartao.h"
#include "../Infra/EmailNotificacao.h"
#include "../Infra/PedidoRepositorioArquivo.h"
#include "../Servicos/ServicoPedido.h"

class LogObserver : public IObserver {
public:
    void atualizar(const std::string& msg) override {
        std::cout << "[LOG] " << msg << "\n";
    }
};

int main() {
    ImpostoSimples imp;
    CobrancaCartao cob;
    EmailNotificacao notif;
    PedidoRepositorioArquivo repo;

    ServicoPedido servico(imp, cob, notif, repo);

    LogObserver log;
    servico.registrarObserver(&log);

    Pedido p{ 1, 200.0, "Gabriel" };
    servico.processar(p);

    return 0;
}
