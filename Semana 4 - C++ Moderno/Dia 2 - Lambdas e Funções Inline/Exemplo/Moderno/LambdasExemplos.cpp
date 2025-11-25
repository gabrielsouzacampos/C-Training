#include "LambdasExemplos.h"
#include <vector>
#include <iostream>
#include <algorithm>

void ExemplosLambdas() {
	std::vector<int> numeros = { 1, 2, 3, 4, 5 };

	// Lambda simples
	auto imprimir = [](int n) { std::cout << n << " "; };
	std::for_each(numeros.begin(), numeros.end(), imprimir);

	// Captura por valor
	int limite = 3;
	auto maiorQue = [=](int n) { return n > limite; };

	int qtd = std::count_if(numeros.begin(), numeros.end(), maiorQue);
	std::cout << "Maiores que 3: " << qtd << "\n";

	// Captura por referência
	int soma = 0;
	std::for_each(numeros.begin(), numeros.end(),
		[&](int n) { soma += n; });

	std::cout << "Soma = " << soma << "\n";
}