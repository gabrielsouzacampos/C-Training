#pragma once
#include <vector>
#include <string>

class Documento {
private:
	std::vector<char> dados;

public:
	Documento(size_t tamanho, char c);

	Documento(const Documento& outro);

	Documento(Documento&& outro) noexcept;

	void info() const;
};
