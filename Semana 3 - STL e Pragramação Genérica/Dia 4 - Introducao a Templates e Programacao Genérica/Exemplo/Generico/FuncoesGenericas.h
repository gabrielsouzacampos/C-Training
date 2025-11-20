#pragma once
#include <iostream>

template<typename T>
T soma(T a, T b) {
    return a + b;
}

template<typename T>
void imprimir(const T& valor) {
    std::cout << valor << "\n";
}
