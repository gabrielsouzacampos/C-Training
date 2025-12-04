#pragma once
#include "IObserver.h"
#include <vector>

class Subject {
private:
    std::vector<IObserver*> obs;
public:
    void registrar(IObserver* o) { obs.push_back(o); }
    void notificar(const std::string& msg) {
        for (auto* o : obs) o->atualizar(msg);
    }
};
