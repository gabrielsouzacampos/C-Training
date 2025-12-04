#pragma once
#include <string>

class IObserver {
public:
    virtual ~IObserver() = default;
    virtual void atualizar(const std::string& msg) = 0;
};
