#include <memory>
#include "../Relacionamento/Nodo.h"

int main()
{
	auto a = std::make_shared<graph::Nodo>("A");
	auto b = std::make_shared<graph::Nodo>("B");

	a->proximo = b;
	b->anterior = a;

	a->info();
	b->info();

	return 0;
}