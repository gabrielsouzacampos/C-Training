#pragma once
#include "FuncoesGenericas.h"
#include <string>

template<>
inline void imprimir<std::string>(const std::string& valor) {
    std::cout << "[string] " << valor << "\n";
}
