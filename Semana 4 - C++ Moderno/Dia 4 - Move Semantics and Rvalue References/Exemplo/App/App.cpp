#include "../Documento/Documento.h"
#include <iostream>
int main()
{
	Documento a(1'000'000, 'x');

	std::cout << "Movendo...\n";
	Documento b(std::move(a));

	std::cout << "Copiando...\n";
	Documento c(b);

	return 0;
}
