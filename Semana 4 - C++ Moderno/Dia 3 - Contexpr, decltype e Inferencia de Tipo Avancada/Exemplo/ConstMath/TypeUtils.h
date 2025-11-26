#pragma once
#include <type_traits>

template<typename T>
constexpr bool isInteiro() {
    return std::is_integral_v<T>;
}

template<typename A, typename B>
auto somaGenerica(A a, B b) {
    return a + b;
}

template<typename A, typename B>
auto tipoDaSoma(A a, B b) {
    return decltype(a + b){};
}
