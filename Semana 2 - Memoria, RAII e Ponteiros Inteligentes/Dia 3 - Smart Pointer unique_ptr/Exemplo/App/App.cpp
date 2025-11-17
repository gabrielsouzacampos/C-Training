#include <memory>
#include "../Memoria/Pessoa.h"
#include "../Exercicio/Recurso.h"

using namespace dominio;

int main()
{
    //Criação simples
    auto p = std::make_unique<Pessoa>("Gabriel");

    //Transfêrencia de ownership
    auto p2 = std::move(p);
    p2->falar();

    //Exercicio
    auto e = std::make_unique<Recurso>();
    auto e2 = std::move(e);
    e2->usar();
}
