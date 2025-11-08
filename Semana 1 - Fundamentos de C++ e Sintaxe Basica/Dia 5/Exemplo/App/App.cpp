#include "Pessoa.h"
#include <iostream>

using namespace dominio;

int main()
{
    std::cout << "--- STACK ---" << std::endl;
    {
        Pessoa pessoa("Gabriel", 26);
        pessoa.exibir();
    }

    std::cout << "--- HEAP ---" << std::endl;
    {
        Pessoa* pessoa = new Pessoa("Maria", 21);
        pessoa->exibir();
        delete pessoa;
    }

    std::cout << "--- HEAP (Smart Pointer) ---" << std::endl;
    {
        std::unique_ptr<Pessoa> pessoa = std::make_unique<Pessoa>("João", 40);
        pessoa->exibir();
    }
}
