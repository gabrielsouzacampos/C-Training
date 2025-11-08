#include <iostream>
#include "Pessoa.h";

int main() {
    dominio::Pessoa gabriel("Gabriel", 27);

    gabriel.Exibir();
    gabriel.Envelhecer();
    gabriel.Exibir();

    return 0;
}
