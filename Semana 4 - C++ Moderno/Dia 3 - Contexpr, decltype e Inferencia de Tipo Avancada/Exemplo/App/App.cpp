#include <iostream>
#include <type_traits>
#include "../ConstMath/ConstMath.h"
#include "../ConstMath/TypeUtils.h"

int main()
{
    std::cout << "------- TYPE UTILS -------- \n";

    std::cout << std::boolalpha;
    std::cout << isInteiro<int>() << "\n";
    std::cout << isInteiro<double>() << "\n";

    auto r = somaGenerica(3, 2.5);
    std::cout << r << "\n";

    decltype(r) x = 9.8;
    std::cout << x << "\n";
}
