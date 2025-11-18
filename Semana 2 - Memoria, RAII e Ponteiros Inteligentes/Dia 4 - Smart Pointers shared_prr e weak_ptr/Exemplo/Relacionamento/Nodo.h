#pragma once
#include <memory>
#include <string>
#include <iostream>

namespace graph {
	class Nodo {
	public:
		std::string nome;
		std::shared_ptr<Nodo> proximo;
		std::weak_ptr<Nodo> anterior;

		Nodo(const std::string& nome);
		
		~Nodo();

		void info() const;
	};
}